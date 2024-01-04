#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
	double x1, y1, x2, y2;
    cin >>x1>>y1>>x2>>y2;
    double M = (y2 - y1) / (x2 - x1);
    double A = M;
    double B = 1;
    double C = -A * x1 - B * y1;
    cout<<fixed<<setprecision(2);
	cout<<A<<" "<<B<<" "<<C;
}

