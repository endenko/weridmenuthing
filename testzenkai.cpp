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
    
    // Bý?c 1: Tính t?a ð? tr?ng tâm c?a tam giác ABC
    double xtg = (xa + xb + xc) / 3;
    double ytg = (ya + yb + yc) / 3;

    // Bý?c 2: Tính bán kính c?a ðý?ng tr?n ngo?i ti?p
    // S? d?ng công th?c di?n tích tam giác ð? tính di?n tích
    // Sau ðó, tính bán kính b?ng công th?c R = a*b*c / (4*di?n tích)
    double a = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    double b = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
    double c = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));

    // Tính di?n tích tam giác ABC b?ng công th?c Heron
    double s = (a + b + c) / 2;
    double dien_tich = sqrt(s * (s - a) * (s - b) * (s - c));

    // Tính bán kính
    double ban_kinh = (a * b * c) / (4 * dien_tich);

    // Bý?c 3: Tính t?a ð? tr?ng tâm c?a ðý?ng tr?n ngo?i ti?p
    double xtg_dtnt = xtg;
    double ytg_dtnt = ytg;

    cout << "toa do trung tam (" << xtg_dtnt << ", " << ytg_dtnt << ")" << endl;
    cout << "ban kinh duong tron " << ban_kinh << endl;

    return 0;
}





