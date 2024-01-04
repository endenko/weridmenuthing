#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long a,b,c;
	cin>>a>>b>>c;
	long d=pow(a,c);
	long e=pow(b,c);
	if(d > e){
	cout<<">";
	}
	else if(d < e){
	cout<<"<";
	}
	else{
	cout<<"=";
	}
}

