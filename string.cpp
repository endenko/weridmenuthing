#include <bits/stdc++.h>
#include <string> 
using namespace std; 
int main(){
	string st,convst=""; 
	getline(cin,st);
	for(int i=0;i<st.size();i++)
	convst=st[i]+convst; 
	cout<<convst;
} 
