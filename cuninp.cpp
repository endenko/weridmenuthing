#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	double a,b,c,x;
	cin>>a>>b>>c>>x;
	double d = x*(a+1)*((b-2)/(c+3));
	cout<<fixed<<setprecision(2);  
	cout<<d<<" "<<(a+1)<<" "<<(b-2)<<" "<<(c+3); 
}

