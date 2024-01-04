#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string chuanHoaXauHoTen(string xau) {
    bool dauTu = true;
    for (int i = 0; i < xau.length(); i++) {
        if (isalpha(xau[i])) {
            if (dauTu) {
                xau[i] = toupper(xau[i]);
                dauTu = false;
            } else {
                xau[i] = tolower(xau[i]);
            }
        } else {
            dauTu = true;
        }
    }
    return xau;
}
int main() {
    string xau;
    getline(cin, xau);
    string xauChuanHoa = chuanHoaXauHoTen(xau);
    string output;
    bool space = false;
    for (int i = 0; i < xauChuanHoa.size(); i++) {
        if (xauChuanHoa[i] == ' ') {
            if (!space) {
                output += ' ';
                space = true;
            }
        } else {
            output += xauChuanHoa[i];
            space = false;
        }
    }
    cout << output << endl;
    return 0;
}

