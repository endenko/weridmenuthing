#include <iostream>
#include <string>
#include <cctype> // �? s? d?ng h�m isalpha v� tolower

using namespace std;

string chuanHoaXauHoTen(string xau) {
    bool dauTu = true; // Bi?n n�y d? x�c d?nh ch? c�i d?u ti�n c?a t?

    for (int i = 0; i < xau.length(); i++) {
        if (isalpha(xau[i])) {
            if (dauTu) {
                xau[i] = toupper(xau[i]); // Bi?n ch? c�i d?u c?a t? th�nh in hoa
                dauTu = false;
            } else {
                xau[i] = tolower(xau[i]); // Bi?n ch? c�i c�n l?i th�nh in thu?ng
            }
        } else {
            dauTu = true; // G?p d?u c�ch ho?c k� t? kh�ng ph?i ch? c�i, d�nh d?u d?u t? m?i
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

