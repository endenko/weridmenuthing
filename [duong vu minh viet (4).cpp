#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
 	long long a,b,s;
 	cin>>a>>b; 
	for(int i = a;i<=b;i++)
		if(i %2 == 0){
	s +=i;
	}

	cout<<s; 
}

