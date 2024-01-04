#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int insert=0;
    while(insert<n&&a[insert]<x){
        insert++;
    }
    cout<<insert+1<<endl;
}

