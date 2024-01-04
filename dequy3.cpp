#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
	
	int Sum(int n){
		if(n==0)
		{return 0;}
		else 
		{return n%10+Sum(n/10);} 
	} 
int main ()
{
	int a;
	cin>>a;
	cout<<Sum(a); 
}

