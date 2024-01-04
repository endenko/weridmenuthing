#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	double a1,b1,c1,a2,b2,c2;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	double d = (fabs (a1*a2 +b1*b2) / (sqrt(a1*a1+b1*b1)*sqrt(a2*a2+b2*b2)));
	cout<<fixed<<setprecision(2); 
	cout<<d; 
}

