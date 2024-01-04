#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,s = 0;
    cin>>n;
    vector<long> a(n);
    for (long i=0;i<n;i++) {
        cin>>a[i];
        s+=a[i];
    }
    double z = static_cast<double>(s) / n;
    sort(a.begin(),a.end());
    double q;
    if(n%2==0) {
        q = static_cast<double>(a[n/2-1]+a[n/2])/2.0;
    }else{
        q = static_cast<double>(a[n/2]);
    }
    cout<<fixed<<setprecision(6)<<z<<endl;
    cout<<fixed<<setprecision(6)<<q<<endl;
}

