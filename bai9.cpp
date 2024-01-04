#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	double x1, y1, x2, y2, x3, y3;
	double d,s; 
	cin>>x1>>y1>>x2>>y2>>x3>>y3; 
	double ab = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    double bc = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    double ca = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
		d = sqrt(s * (s - ab) * (s - bc) * (s - ca));
	 	s = (ab*bc*ca) / (4 * d);
	double hx = (x1 + x2 + x3) / 3.0;
    double hy = (y1 + y2 + y3) / 3.0;
	cout<<fixed<<setprecision(2); 
	cout<<hx<<" "<<hy;  
}

