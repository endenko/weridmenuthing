#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,s=0;
	cin>>a>>b;
	for(int i = a;i<=b;i++){
		if(i % 3 == 0){
			s++;
		}
	}
	cout<<s;	
}
