#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long n,i;
	cin>>n;
	for (i = 1;i <= n;i++)
	if ( n % i == 0)
	{ 
	cout<<i<<" ";
	}
}

