#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
	int sumle(int n){
		int sum = 0; 
		while (n>0){
			int m = n %10; 
			if( m % 2 !=0){
				sum+= m; 
			} 
			n/=10; 
		} 
		return sum; 
	} 
	int sumchan(int n){
		int sum = 0; 
		while (n>0){
			int m = n %10; 
			if( m % 2 ==0){
				sum+= m; 
			} 
			n/=10; 
		} 
		return sum; 
	} 

int main ()
{
	ifstream f("SPECNUM.INP");
	ofstream fo("SPECNUM.OUT");
	int a,b;
	f>>a>>b; 
	int dem = 0;
	for(int n = a;n<=b;n++){
		int q = sumchan(n);  
		int w = sumle(n); 
		
		if(q == w){
			dem++;
		} 
	} 
	fo<<dem<<endl; 
}

