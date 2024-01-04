#include <iostream>
#include <cmath>
using namespace std; 
bool prime(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    long long sum = 0;
    cin>>n;
    int a[n]; 
    for ( i = 0; i < n; i++) {
    cin>>a[i];
        if (prime(a[i])) {
            sum += a[i];
        }
    }
    cout<<sum;
}


