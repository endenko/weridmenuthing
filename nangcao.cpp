#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	double x,y;
	cin >>x>>y;
	double S = log(sqrt(x*x+y*y)-atan(y/x));
	cout<<fixed<<setprecision (3);
	cout<<S; 
}

