#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	freopen("OTO.INP","r",stdin);
	freopen("OTO.OUT","w",stdout);
	int a,b,s;
	cin>>s>>a>>b;
	if (s%(a+b)==0){
		cout<<"YES"; 
	} 
	else{
		cout<<"NO";
	} 
}
 
