#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int n,a,s;
	cin>>n;
	for (int i = 1;i <= n;i++)
	{
	cin>>a;
	if ( a % 2 ==0) 
	s += a; 
	}
	cout<<s; 
}

