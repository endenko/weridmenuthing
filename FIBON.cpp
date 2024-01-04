#include <iostream>
using namespace std;
const int MAX_N = 200;
long long tmp[MAX_N];
long long fiboQHD(int n) {
    if (tmp[n]==-1) {
        if (n<=1) {
            tmp[n]=n;
        }
        else {
            tmp[n]=(fiboQHD(n-1)+fiboQHD(n-2))%1000000007;
        }
    }
    return tmp[n];
}
int main() {
    int n;
    cin>>n;
        for (int i = 0; i < MAX_N; i++) {
            tmp[i] = -1;
        }
        cout<<fiboQHD(n)<<endl;
    }
