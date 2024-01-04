#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int m,n,t;
	cin >>m>>n>>t;
	int sumpen = n + (n/m)*m ;
	int sotien = (sumpen/m)*t;
	cout<<sotien<<endl; 
}

