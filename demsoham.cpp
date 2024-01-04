#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	int ds(int a)
	{
		int dem =0;
		dem ++;
		dem = a%10;
		return dem;		
	}
int uocso(int n)
{
	int S=0;
		for(int i = 1;i<=n;i++)
		{
		if(n%i==0)
		S++;
		}	
	return S;
}
int main ()
{
	int a;
	cin>>a;
	cout<<uocso(a);
}

