#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	long long S =(fabs((x2*y1)-(x1*y2)+(x3*y2)-(x2*y3)+(x1*y3)-(x3*y1)))/2;
	cout<<fixed<<setprecision(2);
	cout<<S;
}
