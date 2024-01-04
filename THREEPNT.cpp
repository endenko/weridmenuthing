#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	double x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3; 
	if (  ((y3-y1)/(x3-x1)==(y2-y1)/(x2-x1)   )  or (   (y3-y1)*(x2-x1) == (x3-x1)*(y2-y1)))
		cout<<"TRUE";
	else 
		cout<<"FALSE";
}
