#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 
using namespace std;
int main()
{
	double    x1,y1,r,x2,y2,canh;
	cin>>x1>>y1>>r>>x2>>y2; 
	canh  = sqrt((x2 - x1)*(x2-x1) + (y2 - y1)*(y2-y1));
	if ( canh == r ) 
		cout<<"2";
	else if  (  canh -r  > 0 ) 
			cout<<"3";
		 else 
		 	cout<<"1"; 
}
