#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int Sum(long long n)
{
	if(n==0) return 0;
	else return (n%10+ Sum(n/10)); 
}
int main ()
{
	long long n;
	cin>>n;
	if(n%Sum(n)==0)
	{
		cout<<"1"<<endl; 
	}
	else
	{
		cout<<"0"<<endl; 
	} 
}

