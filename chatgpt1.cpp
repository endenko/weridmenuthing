#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double x = (2.0 * n) / 3.0;
    double a = n - x;
    double b = x;

    cout << fixed << setprecision(2) << a << " " << b << endl;

    return 0;
}6 
