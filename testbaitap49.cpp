#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std; 
int main() {
    int n,p,k;
    cin >>n>>k;
    int s=n; 
    int t=1;
	for(int i=1;i<=k;i++){
		t *=10;
		p =n*t;
		s +=p; 
	} 
	cout<<s;
}

