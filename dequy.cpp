#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int Fact(int n)
{
	if (n==0)
	{
		return 1; 
	 } 
	 else 
	 {
	 	return n*Fact(n-1); 
	  } 
	
 } 
int main ()
{
	int a;
	cin>>a;
	int A = Fact(a);
	cout<<A<<endl; 
}

