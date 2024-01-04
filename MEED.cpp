#include <iostream>
using namespace std;

int main() {
    int m,n,k;
    cin>>m>>n>>k;
    int sum=(n-m%n)%n;
    if (sum==0){
        cout<<"0"<<endl;
        return 0;
    }
    int days=(sum+k-1)/k;
    cout<<days<<endl;
    return 0;
}

