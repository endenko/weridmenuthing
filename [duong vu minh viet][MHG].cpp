#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	freopen("MHG.INP","r",stdin);
	freopen("MHG.OUT","w",stdout);
	int m,n,k;
	int t = 0; 
	cin>>m>>n>>k;
	int d = m ;
while(m-n>0)
	{
		t++;
		m-=n; 
	}
	if(d%2!=0 && d>n){
	    cout<<(d-t+1)*k;
	}
	else cout<<(d-t)*k;
}

