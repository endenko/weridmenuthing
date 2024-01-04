#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int GT(int n){
	if(n==0||n==1)
	return 1;	
	else return n*GT(n-1); 
} 
int main ()
{
	int n,x;
	float s=1;
	cin>>x>>n;
	for(int i = 1;i<=n;i++)
	{
		s+=(pow(x,i))/GT(i); 
	 }
	 cout<<s; 
}

