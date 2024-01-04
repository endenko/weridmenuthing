#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main (int argc, char *argv[])
{
    std::cout << "#####################################" << std::endl;
    std::cout << "# Welcome to the YARR Scan Console! #" << std::endl;
    std::cout << "#####################################" << std::endl;

    std::cout << "-> Parsing command line parameters ..." << std::endl;
    
    // Init parameters
    unsigned specNum = 0;
    std::string scanType = "digitalscan";
    std::string configPath = "";
    std::string outputDir = "./";
    bool doPlots = false;

    int c;
    while ((c = getopt(argc, argv, "hs:n:c:po:")) != -1) {
        switch (c) {
            case 'h':
                printHelp();
                return 0;
                break;
            case 's':
                scanType = std::string(optarg);
                break;
            case 'n':
                specNum = atoi(optarg);
                break;
            case 'c':
                configPath = optarg;
                break;
            case 'p':
                doPlots = true;
                break;
            case 'o':
                outputDir = std::string(optarg);
                if (outputDir.back() != '/')
                    outputDir = outputDir + "/";
                break;
            case '?':
                if (optopt == 's' || optopt == 'n' || optopt == 'c') {
                    std::cerr << "-> Option " << (char)optopt 
                        << " requires a parameter! (Proceeding with default)" << std::endl;
                } else {
                    std::cerr << "-> Unknown parameter: " << (char)optopt << std::endl;
                }
                break;
            default:
                std::cerr << "-> Error while parsing command line parameters!" << std::endl;
                return -1;
        }
    }

    std::cout << " SPEC Nr: " << specNum << std::endl;
    std::cout << " Scan Type: " << scanType << std::endl;
    std::cout << " Global configuration: " << configPath << std::endl;
    std::cout << " Output Plots: " << doPlots << std::endl;
    std::cout << " Output Directory: " << outputDir << std::endl;

    std::cout << std::endl;
    std::cout << "#################" << std::endl;
    std::cout << "# Init Hardware #" << std::endl;
    std::cout << "#################" << std::endl;
    
    std::cout << "-> Init SPEC " << specNum << " : " << std::endl;
    SpecController spec(specNum);
    TxCore tx(&spec);
    RxCore rx(&spec);
    Bookkeeper bookie(&tx, &rx);
    bookie.setTargetThreshold(1500);
    
    std::cout << "-> Read global config (" << configPath << "):" << std::endl;
    std::fstream gConfig(configPath, std::ios::in);
    if (!gConfig) {
        std::cerr << "## ERROR ## Could not open file: " << configPath << std::endl;
        return -1;
    }

    while (!gConfig.eof() && gConfig) {
        unsigned id, tx, rx;
        std::string name, feCfgPath;
        char peekaboo = gConfig.peek();
        if (peekaboo == '\n') {
            gConfig.ignore();
            peekaboo = gConfig.peek();
        }
        if (peekaboo == '#') {
            char tmp[1024];
            gConfig.getline(tmp, 1024);
            std::cout << " Skipping: " << tmp << std::endl;
        } else {
            gConfig >> name >> id >> tx >> rx >> feCfgPath;
            if (gConfig.eof())
                break;
            std::cout << "-> Found FE " << name << std::endl;
            // Add FE to bookkeeper
            bookie.addFe(id, tx, rx);
            bookie.getLastFe()->setName(name);
            // TODO verify cfg typea
            // Load config
            bookie.getLastFe()->fromFileBinary(feCfgPath);
            // Set chipId again after loading in case we got std cfg
            bookie.getLastFe()->setChipId(id);
        }
    }
        
    std::cout << std::endl;
    std::cout << "#################" << std::endl;
    std::cout << "# Configure FEs #" << std::endl;
    std::cout << "#################" << std::endl;
    
    std::chrono::steady_clock::time_point cfg_start = std::chrono::steady_clock::now();
    for (unsigned i=0; i<bookie.feList.size(); i++) {
        Fei4 *fe = bookie.feList[i];
        std::cout << "-> Configuring " << fe->getName() << std::endl;
        // Select correct channel
        tx.setCmdEnable(0x1 << fe->getTxChannel());
        // Configure
        fe->configure();
        fe->configurePixels(); // TODO should call abstract configure only
        // Wait for fifo to be empty
        std::this_thread::sleep_for(std::chrono::microseconds(100));
        while(!tx.isCmdEmpty());
    }
    std::chrono::steady_clock::time_point cfg_end = std::chrono::steady_clock::now();
    std::cout << "-> All FEs configured in " 
        << std::chrono::duration_cast<std::chrono::milliseconds>(cfg_end-cfg_start).count() << " ms !" << std::endl;
    
    // Wait for rx to sync with FE stream
    // TODO Check RX sync
    std::this_thread::sleep_for(std::chrono::microseconds(1000));
    // Enable all active channels
    tx.setCmdEnable(bookie.getTxMask());
    std::cout << "-> Setting Tx Mask to: 0x" << std::hex << bookie.getTxMask() << std::dec << std::endl;
    rx.setRxEnable(bookie.getRxMask());
    std::cout << "-> Setting Rx Mask to: 0x" << std::hex << bookie.getRxMask() << std::dec << std::endl;
    
    std::cout << std::endl;
    std::cout << "##############" << std::endl;
    std::cout << "# Setup Scan #" << std::endl;
    std::cout << "##############" << std::endl;

    // TODO Make this nice
    ScanBase *s = NULL;
    std::cout << "-> Selecting Scan: " << scanType << std::endl;
    if (scanType == "digitalscan") {
        std::cout << "-> Found Digital Scan" << std::endl;
        s = new Fei4DigitalScan(&bookie);
    } else if (scanType == "analogscan") {
        std::cout << "-> Found Analog Scan" << std::endl;
        s = new Fei4AnalogScan(&bookie);
    } else if (scanType == "thresholdscan") {
        std::cout << "-> Found Threshold Scan" << std::endl;
        s = new Fei4ThresholdScan(&bookie);
    } else if (scanType == "totscan") {
        std::cout << "-> Found ToT Scan" << std::endl;
        s = new Fei4TotScan(&bookie);
    } else if (scanType == "tune_globalthreshold") {
        std::cout << "-> Found Global Threshold Tuning" << std::endl;
        s = new Fei4GlobalThresholdTune(&bookie);
    } else if (scanType == "tune_pixelthreshold") {
        std::cout << "-> Found Pixel Threshold Tuning" << std::endl;
        s = new Fei4PixelThresholdTune(&bookie);
    } else if (scanType == "tune_globalpreamp") {
        std::cout << "-> Found Global Preamp Tuning" << std::endl;
        s = new Fei4GlobalPreampTune(&bookie);
    } else if (scanType == "tune_pixelpreamp") {
        std::cout << "-> Found Pixel Preamp Tuning" << std::endl;
        s = new Fei4PixelPreampTune(&bookie);
    } else if (scanType == "noisescan") {
        std::cout << "-> Found Noisescan" << std::endl;
        s = new Fei4NoiseScan(&bookie);
    } else {
        std::cout << "-> No matching Scan found, possible:" << std::endl;
        listScans();
        std::cerr << "-> Aborting!" << std::endl;
        return -1;
    }
    
    // Init histogrammer and analysis
    for (unsigned i=0; i<bookie.feList.size(); i++) {
        Fei4 *fe = bookie.feList[i];
        if (fe->isActive()) {
            // Init histogrammer per FE
            fe->histogrammer = new Fei4Histogrammer();
            fe->histogrammer->connect(fe->clipDataFei4, fe->clipHisto);
            // Add generic histograms
            fe->histogrammer->addHistogrammer(new OccupancyMap());
            fe->histogrammer->addHistogrammer(new TotMap());
            fe->histogrammer->addHistogrammer(new Tot2Map());
            fe->histogrammer->addHistogrammer(new L1Dist());
            fe->histogrammer->addHistogrammer(new HitDist());
           
            // Init analysis per FE and depending on scan type
            fe->ana = new Fei4Analysis(&bookie, fe->getRxChannel());
            fe->ana->connect(s, fe->clipHisto, fe->clipResult);
            fe->ana->addAlgorithm(new L1Analysis());
            if (scanType == "digitalscan") {
                fe->ana->addAlgorithm(new OccupancyAnalysis());
            } else if (scanType == "analogscan") {
                fe->ana->addAlgorithm(new OccupancyAnalysis());
            } else if (scanType == "thresholdscan") {
                fe->ana->addAlgorithm(new ScurveFitter());
            } else if (scanType == "totscan") {
                fe->ana->addAlgorithm(new TotAnalysis());
            } else if (scanType == "tune_globalthreshold") {
                fe->ana->addAlgorithm(new OccGlobalThresholdTune());
            } else if (scanType == "tune_pixelthreshold") {
                fe->ana->addAlgorithm(new OccPixelThresholdTune());
            } else if (scanType == "tune_globalpreamp") {
                fe->ana->addAlgorithm(new TotAnalysis());
            } else if (scanType == "tune_pixelpreamp") {
                fe->ana->addAlgorithm(new TotAnalysis());
            } else if (scanType == "noisescan") {
                fe->ana->addAlgorithm(new NoiseAnalysis());
            } else {
                std::cout << "-> Analyses not defined for scan type" << std::endl;
                listScans();
                std::cerr << "-> Aborting!" << std::endl;
                return -1;
            }
        }
    }

    std::cout << "-> Running pre scan!" << std::endl;
    s->init();
    s->preScan();

    unsigned int numThreads = std::thread::hardware_concurrency();
    std::cout << "-> Starting " << numThreads << " processor Threads:" << std::endl; 
    std::vector<std::thread> procThreads;
    for (unsigned i=0; i<numThreads; i++) {
        procThreads.push_back(std::thread(process, &bookie));
        std::cout << "  -> Processor thread #" << i << " started!" << std::endl;
    }

    std::vector<std::thread> anaThreads;
    std::cout << "-> Starting histogrammer and analysis threads:" << std::endl;
    for (unsigned i=0; i<bookie.feList.size(); i++) {
        Fei4 *fe = bookie.feList[i];
        if (fe->isActive()) {
            anaThreads.push_back(std::thread(analysis, fe->histogrammer, fe->ana));
            std::cout << "  -> Analysis thread of Fe " << fe->getRxChannel() << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "########" << std::endl;
    std::cout << "# Scan #" << std::endl;
    std::cout << "########" << std::endl;

    std::cout << "-> Starting scan!" << std::endl;
    std::chrono::steady_clock::time_point scan_start = std::chrono::steady_clock::now();
    s->run();
    s->postScan();
    std::cout << "-> Scan done!" << std::endl;
    scanDone = true;
    std::chrono::steady_clock::time_point scan_done = std::chrono::steady_clock::now();
    std::cout << "-> Waiting for processors to finish ..." << std::endl;
    for (unsigned i=0; i<numThreads; i++) {
        procThreads[i].join();
    }
    std::chrono::steady_clock::time_point processor_done = std::chrono::steady_clock::now();
    processorDone = true;
    std::cout << "-> Processor done, waiting for analysis ..." << std::endl;
    for (unsigned i=0; i<anaThreads.size(); i++) {
        anaThreads[i].join();
    }
    std::chrono::steady_clock::time_point all_done = std::chrono::steady_clock::now();
    std::cout << "-> All done!" << std::endl;

    tx.setCmdEnable(0x0);
    rx.setRxEnable(0x0);

    std::cout << std::endl;
    std::cout << "##########" << std::endl;
    std::cout << "# Timing #" << std::endl;
    std::cout << "##########" << std::endl;

    std::cout << "-> Configuration: " << std::chrono::duration_cast<std::chrono::milliseconds>(cfg_end-cfg_start).count() << " ms" << std::endl;
    std::cout << "-> Scan:          " << std::chrono::duration_cast<std::chrono::milliseconds>(scan_done-scan_start).count() << " ms" << std::endl;
    std::cout << "-> Processing:    " << std::chrono::duration_cast<std::chrono::milliseconds>(processor_done-scan_done).count() << " ms" << std::endl;
    std::cout << "-> Analysis:      " << std::chrono::duration_cast<std::chrono::milliseconds>(all_done-processor_done).count() << " ms" << std::endl;

    std::cout << std::endl;
    std::cout << "###########" << std::endl;
    std::cout << "# Cleanup #" << std::endl;
    std::cout << "###########" << std::endl;
    
    // Cleanup
    delete s;
    for (unsigned i=0; i<bookie.feList.size(); i++) {
        Fei4 *fe = bookie.feList[i];
        if (fe->isActive()) {
            // Save config
            std::cout << "-> Saving config of FE " << fe->getName() << std::endl;
            fe->toFileBinary();
            // Plot
            if (doPlots) {
                std::cout << "-> Plotting histograms of FE " << fe->getRxChannel() << std::endl;
                fe->ana->plot("ch" + std::to_string(fe->getRxChannel()) + "_" + scanType, outputDir);
            }
            // Free
            delete fe->histogrammer;
            fe->histogrammer = NULL;
            delete fe->ana;
            fe->ana = NULL;
        }
    }
    return 0;
}
Top Functions | Top Classes | Privacy Policy | Advertise with us
PHP | C (CSharp) | Java | Golang | C++ (Cpp) | Python | JavaScript | TypeScript
EN | RU | DE | FR | ES | PT | IT | JP | ZH

}

