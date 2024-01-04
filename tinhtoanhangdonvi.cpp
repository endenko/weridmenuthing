#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int m,n;
	cin>>m>>n;
	int a = m/1000;
	int b = m/100;
	int c = m/10;
	int d = m%10;
	int	e = n/1000;
	int f = n/100;
	int g = n/10;
	int h = n%10;
	int S = a*e;
	int P = d+h; 
	cout<<P<<endl;
	cout<<S<<endl; 
}

