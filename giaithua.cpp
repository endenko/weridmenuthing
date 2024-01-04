#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double tinhGiaiThua(int n) {
    if (n == 0) return 1;
    double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    double x, S = 0;
    int n;
    cin >>x>>n;

    for (int i = 0; i <= n; i++) {
        S += pow(x, i) / tinhGiaiThua(i);
    }

    cout<< fixed << setprecision(1) << S << endl;

    return 0;
}
