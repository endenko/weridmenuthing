#include <iostream>
#include <string>
using namespace std;
int buocchay(int z, int q) {
    int xuoi= (q-z+10) % 10;
    int nguoc=(z-q+10)%10;
    return min(xuoi,nguoc);
}
int main(){
    int n;
    cin>>n;    
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++) {
        int da=a[i]-'0'; 
        int db=b[i]-'0';   
        ans += buocchay(da, db); 
    }
    cout<<ans;
}
        ans += min(abs(da - db), 10 - abs(da - db)); 

