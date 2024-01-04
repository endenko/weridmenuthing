#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
bool Snum(long n){
	if (n==0){
		return false; 
	} 
	int sum = 0; 
	while (n>0){
		sum+= n%10;
		n/=10;
			}		
		return(n%sum==0); 
} 
int main ()
{
	int n;
	cin>>n;
	bool d = Snum(n); 
	if (d){
		cout<<"1"<<endl; 
	} 
	else{
		cout<<"0"<<endl;
	}
}

