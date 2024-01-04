#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
	void bin(int n)
	{
		if(n>0) 
		{
			bin (n/2);
			cout<<n%2;  
		}
	 } 
int main ()
{
	int a;
	cin>>a;
	bin (a); 
}

