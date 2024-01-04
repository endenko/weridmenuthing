#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long a,b;
	cin>>a>>b;
	if (a == 0){
	if(b == 0){
		cout<<"Many Solutions";	
	}else{
		cout<<"No Solution"; 		
	} 		
}	else{
	double x = (double)-b/a;
	cout << fixed << setprecision(2) << x;
	} 
}

