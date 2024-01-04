#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

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

