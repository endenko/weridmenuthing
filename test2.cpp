#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	float x,n;
	double s = 0.0; 
	cin>>x>>n;
	for(int i = 0;i<=n;i++){
	s += (x*i)/n; 
	}
	cout<<fixed<<setprecision(2)<<s<<endl; 
}

