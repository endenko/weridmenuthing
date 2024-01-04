#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long S=1;
	for(long long i = 2;i < sqrt(n);i++)
		if(n%i==0){
			S+=i+n/i;
		}

	if(n/int(sqrt(n))==sqrt(n))
		S+=sqrt(n);

	if(S>n){
	cout<<"1";
	}
	else{
		cout<<"0";
	}

}
