#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double xa, ya, xb, yb, xc, yc;
    
    cout << "nhap a ";
    cin >> xa >> ya;
    
    cout << "nhap b ";
    cin >> xb >> yb;
    
    cout << "nhap c ";
    cin >> xc >> yc;
    
    // B�?c 1: T�nh t?a �? tr?ng t�m c?a tam gi�c ABC
    double xtg = (xa + xb + xc) / 3;
    double ytg = (ya + yb + yc) / 3;

    // B�?c 2: T�nh b�n k�nh c?a ��?ng tr?n ngo?i ti?p
    // S? d?ng c�ng th?c di?n t�ch tam gi�c �? t�nh di?n t�ch
    // Sau ��, t�nh b�n k�nh b?ng c�ng th?c R = a*b*c / (4*di?n t�ch)
    double a = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    double b = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
    double c = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));

    // T�nh di?n t�ch tam gi�c ABC b?ng c�ng th?c Heron
    double s = (a + b + c) / 2;
    double dien_tich = sqrt(s * (s - a) * (s - b) * (s - c));

    // T�nh b�n k�nh
    double ban_kinh = (a * b * c) / (4 * dien_tich);

    // B�?c 3: T�nh t?a �? tr?ng t�m c?a ��?ng tr?n ngo?i ti?p
    double xtg_dtnt = xtg;
    double ytg_dtnt = ytg;

    cout << "toa do trung tam (" << xtg_dtnt << ", " << ytg_dtnt << ")" << endl;
    cout << "ban kinh duong tron " << ban_kinh << endl;

    return 0;
}





