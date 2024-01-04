#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	int S = 2*c*(a+b)+2*a*b;
	int D = x*y;
	if(S<D){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}

