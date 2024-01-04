#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long n;
	cin>>n;
	if (n<2)
	{
	cout<<"False";	 
	} 
	else
	{
		for (int i = 2; i <= sqrt(n); ++i) 
		if (n % i == 0)
		{
			cout<<"False";	
			return 0; 
		} 
	}
	cout<<"True";  
}

