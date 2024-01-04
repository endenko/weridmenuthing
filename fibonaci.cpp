#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
	int Fibonaci(int n)
	{	int f1,f0,fn; 
		f0 = 0;
		f1 = 1;
		fn = 1;
		if (n<=0)
		{
			return -1; 
		 } 
		else if (n == 1 || n == 2)
		 {
		 	return n; 
		  } 
		else
		{
			return fibonacci(n - 1) + fibonacci(n - 2);
			}
		}  
	} 
int main ()
{
	int a;
	cin>>a;
	cout<<f(a); 
}

