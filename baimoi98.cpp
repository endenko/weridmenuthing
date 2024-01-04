#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long n,dem=1;
	cin >>n;
	while (n>=10)
	{
		dem+=1;
		n=n/10; 
	}
	cout<<dem; 
}

