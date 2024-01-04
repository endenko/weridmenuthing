#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	freopen("VECTOR.INP","r",stdin);
	freopen("VECTOR.OUT","w",stdout);
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int A = x2-x1;
	int B = y2-y1; 
	cout<<A<<" "<<B; 
}

