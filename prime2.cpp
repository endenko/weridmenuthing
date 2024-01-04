#include <iostream>
#include <cmath>
using namespace std;

bool prime(long long n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long num;
        cin>>num;
        if (prime(num)) {
            sum += num;
        }
    }
    cout<<sum;
}

