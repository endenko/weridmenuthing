#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long n;
	cin>>n;
	if ((n %2 ==0) or (n<0 && n %3 ==0 ) )
	{
	cout<<"Yes";
	}	
	else
	{
	cout<<"No";
	}
	return 0; 
}

