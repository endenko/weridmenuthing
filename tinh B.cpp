#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long x;
	cin>>x;
	if (x>3)
	{
		long B = ((x*x*x) + (2*(x*x)) + (5*x));
		cout<<B; 
	}
	if (1 <= x && x <= 3)
	{
		long B = ((x*x)-(2*x)+4);
		cout<<B; 
	}
	if ( x < 1)
	{
		long B = ((5*x) - 8);
		cout<<B;  
	}	 
}

