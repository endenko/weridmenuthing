#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main ()
{
	long a,b,c,d;
	cin>>a>>b>>c>>d;
	long S = a*b*c*d;
	S %= 100;
	cout<<S; 
}

