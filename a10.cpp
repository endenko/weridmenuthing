#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long n,s=0;
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0) 
		s+=i ;
	}
	if (s==n)
	cout<<"true"; else cout<<"false"; 
}

