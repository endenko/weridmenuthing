#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	float x,n;
	float s=1;
	long t=1;
	cin>>x>>n;
	for(int i =1;i <= n;i++){
		t *=i;
		s +=(pow(x,i))/t; 
	} 
	cout<<s; 
}

