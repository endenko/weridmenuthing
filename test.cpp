#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	float x,n;
	cin>>x>>n;
	float S = 1+x+((x*x)/n);
	cout<<setprecision(2)<<S<<endl; 
}

