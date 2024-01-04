#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long x;
	cin>>x;
	if ( x >= 10)
	{
		long a = ((x*x*x) + (5*x));
		cout<<a; 
	} 
	if ( x < 10)
	{
		long a = ((x*x)-(2*x)+4);  
		cout<<a; 
	} 
}

