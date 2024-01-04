#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,k,m;
ll a[1000005];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>k>>m;
        a[0]=0;
        ll i=1;
        while(i<=k)
        {
            ll x=a[i-1];
            while(1)
            {
                x+=3;
                ll y=sqrt(x+1);
                if(y*y==x+1)
                {
                    a[i]=x;
                    i++;
                    break;
                }
            }
        }
        cout<<a[k]%m<<endl;
    }
    return 0;
}
