#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	double a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	double TVHAB = (a1*b1+a2*b2);
	double ModulA = sqrt(a1*a1 + a2*a2); 
	double ModulB = sqrt(b1*b1 + b2*b2); 
	double C = TVHAB/(ModulA*ModulB);
	cout<<fixed<<setprecision(2); 
	cout<<C; 
}

