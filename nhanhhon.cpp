#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    float x,s = 1.0;
    int n; 
    float TS = 1.0;
    int MS = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        TS *= x; 
        MS *= i;
        s += TS / MS;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}
