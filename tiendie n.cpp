#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int soKWhTieuThu = b - a;
    int tienDien = 0;
    if (soKWhTieuThu <= 100) {
        tienDien = soKWhTieuThu * 1000;
    } else if (soKWhTieuThu <= 150) {
        tienDien = 100 * 1000 + (soKWhTieuThu - 100) * 1200;
    } else if (soKWhTieuThu <= 200) {
        tienDien = 100 * 1000 + 50 * 1200 + (soKWhTieuThu - 150) * 2000;
    } else {
        tienDien = 100 * 1000 + 50 * 1200 + 50 * 2000 + (soKWhTieuThu - 200) * 2500;
    }
    cout<<tienDien<<endl;
    return 0;
}

