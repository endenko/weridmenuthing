#include <bits/stdc++.h>
using namespace std;

bool Prime(long long n){
	if(n<2){
	return false; 
	}
		for(long long i = 2;i<=sqrt(n);i++){
			if(n%i==0)
			 return false; 
		}
		return true; 
} 
int main(){
	long long n;
	cin>>n;
	if(Prime(n)){
		cout<<"YES"; 
	}
	else{
		cout<<"NO"; 
	} 
} 
