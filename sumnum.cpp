#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    int C= ceil(a); 
    int D= floor(b); 

    int sum = 0;
    for (int i = C; i <= D; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}

