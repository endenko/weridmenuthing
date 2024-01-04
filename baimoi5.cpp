#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	double x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2; 
	double M1 = (x1+x2)/2;
	double M2 = (y1+y2)/2;
	cout<<fixed<<setprecision(2);  
	cout<<M1<<" "<<M2; 
}

