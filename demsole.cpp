#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    int sum=0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n % 2 != 0) {
            sum+=n;
        }
    }
    cout<<sum;
}

