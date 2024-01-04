#include <bits/stdc++.h>
#include <string> 
using namespace std; 
int main(){
	string st;
	int sum =0; 
	getline(cin,st);
	for(int i=0;i<st.size();i++){
	if(isdigit(st[i])){
	sum++;
		}
	}
	cout<<sum<<endl;
} 
