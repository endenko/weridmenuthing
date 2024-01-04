#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	long t1=(x2-x1)/(v1-v2);
	long t2=(x2-x1)/(v2-v1);
	if(t1 >= 0 && t2 >= 0 &&t1 == t2 ){
		cout<<"YES"<<endl; 
	} 
	else{
		cout<<"NO"<<endl; 
	} 
}

