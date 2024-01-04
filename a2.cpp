#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long a,dem = 0;
	do 
	{
		cin>>a;
		if(a % 2 != 0)
		{ 
			dem++;
		}
	}	
	while (a!=0); 
	cout<<dem; 
}

