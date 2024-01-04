#include <iostream>
#include <string>
#include <cctype> // Ð? s? d?ng hàm isalpha và tolower

using namespace std;

string chuanHoaXauHoTen(string xau) {
    bool dauTu = true; // Bi?n này d? xác d?nh ch? cái d?u tiên c?a t?

    for (int i = 0; i < xau.length(); i++) {
        if (isalpha(xau[i])) {
            if (dauTu) {
                xau[i] = toupper(xau[i]); // Bi?n ch? cái d?u c?a t? thành in hoa
                dauTu = false;
            } else {
                xau[i] = tolower(xau[i]); // Bi?n ch? cái còn l?i thành in thu?ng
            }
        } else {
            dauTu = true; // G?p d?u cách ho?c kí t? không ph?i ch? cái, dánh d?u d?u t? m?i
        }
    }

    return xau;
}

int main() {
    string xau;
    getline(cin, xau);

    string xauChuanHoa = chuanHoaXauHoTen(xau);
    cout << xauChuanHoa << endl;

    return 0;
}

