#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath> 
using namespace std;
int main ()
{
	long long a,b;
	cin>>a>>b;
	long long x = a + b;
	long long c = a - b;
	long long d = a * b;
	long long f = a / b;
	long long g = a % b;
	cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<x<<endl;
	cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<c<<endl;
	cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<d<<endl; 
	cout<<a<<" "<<"/"<<" "<<b<<" "<<"="<<" "<<f<<endl; 
	cout<<a<<" "<<"%"<<" "<<b<<" "<<"="<<" "<<g<<endl;   
}

