#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

bool songuyento(int n) {
    if (n < 2 ) {
        return false;
    }
    for (int i = 2; i<= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    long long n;
    cin>>n;
    cout<<songuyento(n);
    return 0;
}
