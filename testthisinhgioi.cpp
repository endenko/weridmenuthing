#include <iostream>
#include <cmath>
using namespace std;
bool Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
bool Reverse(int n) {
    int t = n, R = 0;
    while (t > 0) {
        R = R * 10 + t % 10;
        t /= 10;
    }
    return n == R;
}
int main() {
    int a,b,sum=0;
    cin >>a>>b;
    for (int i=a;i<=b;i++) {
        if (Prime(i) && Reverse(i)) {
            sum++;
        }
    }
    cout<<sum<<endl;
}
