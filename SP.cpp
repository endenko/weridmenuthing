#include <iostream>
using namespace std;
int main() {
    int m,n,k;
    cin>>m>>n>>k;
    int d=m;
    int t=(d-1)/(n-1);
    if (d%2!=0&&d>n) {
        cout<<(d-t)*k;
    } else {
        cout<<(d-t)*k;
    }
}
