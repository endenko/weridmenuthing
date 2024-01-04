#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3; float a;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a = ((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2))/(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))*sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)));
	if (a==0) cout<<2;
	else if (a<0) cout<<3;
	else cout<<1;
	return 0;
}

