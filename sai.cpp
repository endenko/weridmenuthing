#include <iostream>
#include <fstream>
using namespace std;
long long a[300001],g[300001],gmin[300001];
int main(){
ifstream infile("seq.inp");
ofstream outfile("seq.out");
unsigned long n,i,index;
infile>>n;
infile>>a[0];
g[0]=a[0];
long long max=a[0];
gmin[0]=0;
for(int i=1;i<n;i++){
infile>>a[i];
g[i]=g[i-1]+a[i];
if(gmin[i-1]>g[i-1]){
gmin[i]=g[i-1];
index=i;
}
else gmin[i]=gmin[i-1];
if((i-index+1)%3==0&&max<(g[i]-gmin[i]))    max=(g[i]-gmin[i]);
}
outfile<<max;
infile.close();
outfile.close();
return 0;
}
