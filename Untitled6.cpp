#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	long double AB = sqrt(pow(x2 - x1, 2) +pow(y2 - y1, 2));
	cout<<std::fixed<<std::setprecision(9)<<AB; 
	 
}

