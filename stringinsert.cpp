#include <bits/stdc++.h>
#include <string> 
using namespace std;
int main(){
	string st="Su Pham Da Nang.";
	string st1="Truong ";
	string st2="Bo Dai Hoc ";
	st.insert(0,st1);
	cout<<st<<endl;
	st.insert(7,st2,3,8);
	cout<<st;  
} 
