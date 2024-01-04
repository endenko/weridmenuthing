#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long a,b;
	cin>>a>>b;
	long long r;
	while (b!=0){
		r = a%b; 
		a = b; 
		b = r; 
	} 
	cout<<a; 
}

