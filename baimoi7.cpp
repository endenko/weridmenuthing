#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,x,y;
	cin>>a>>b>>c>>x>>y; 
	double k = fabs (a*x+b*y+c);
	double g = sqrt(a * a + b * b);
	double d = k/g;
	cout<<fixed<<setprecision(2);  
	cout<<d; 
}

