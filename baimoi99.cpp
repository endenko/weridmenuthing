#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int s = 0,i =1;
	do
	{
		s+=i;
		i++; 
	}while(i<=n); 
	 cout<<s;
}

