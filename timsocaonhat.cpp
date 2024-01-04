#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i =1;i<=n;i++){
	cin>>a[i];
	if (a[i]<=2);{
		cout<<"1"<<endl; 
	else if(a[i]>2){
		cout<<a[i-1]+a[i-2]<<endl; 
	}
	else{
		cout<<"-1"<<endl; 
	} 
	
	}
}
}

