#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
	double x1,x2,y1,y2,x3,y3,x,y,d,dx,dy,c1,c2;

	
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	
	
	
	x=(((x2*x2+y2*y2-x1*x1-y1*y1)/2)*(y3-y1)-((x3*x3+y3*y3-x1*x1-y1*y1)/2)*(y2-y1))/(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	y=((x2-x1)*((x3*x3+y3*y3-x1*x1-y1*y1)/2)-((x2*x2+y2*y2-x1*x1-y1*y1)/2)*(x3-x1))/(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	
	
	cout <<fixed<< setprecision(2) <<x<<" "<<y;
	
	
	
	return 0;
}
