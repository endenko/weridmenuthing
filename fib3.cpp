#include <iostream>
long long f[10000001];
using namespace std;

int main()
{
    int a,b,c,k,n;
    cin>>a>>b>>c>>k>>n;
    f[0]=0;
    f[1]=1;
    f[2]=2;
    f[3]=3;
    for(int i=4;i<=n;i++){
        if(i%3==0){
            f[i] = c*f[i-1]+a*f[i-2]+b*f[i-3];
        }else if(i%3==1){
            f[i]=a*f[i-1]+b*f[i-2]+c*f[i-3];
        }else f[i]=b*f[i-1]+c*f[i-2]+a*f[i-3];
    }
    cout<<f[n];
    return 0;
}
