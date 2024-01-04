#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    string xau;
    getline(cin,xau);
    int Up= 0;
    int Down= 0;
    int Digit= 0;
    for (char ki_tu : xau) {
        if (isupper(ki_tu)) {
            Up++;
        } else if (islower(ki_tu)) {
            Down++;
        } else if (isdigit(ki_tu)) {
            Digit++;
        }
    }
    if (Up==0&&Down==0&&Digit==0){
        cout<<"0";
    } else {
        cout<<Up<<" "<<Down<<" "<<Digit;
    }
}

