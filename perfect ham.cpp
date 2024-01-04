#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

bool perfect(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0){
	s+=i;
	}
	if (s!=n){
	return false;
			}
	else if(s==n){
	return true;
	}
}


int main ()
{
	long a;
	cin>>a;
	cout<<perfect(a);
}

