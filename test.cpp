#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int m,n,k;
	int t = 0; 
	cin>>m>>n>>k;
	int d = m ;
while(m-n>0)
	{
		t+=1;
		m-=n; 
	}
	if(d%2==0){
	    cout<<(d-t)*k;
	}
	else cout<<(d-t+1)*k;
}

