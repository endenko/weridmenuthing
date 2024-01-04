#include <bits/stdc++.h>
#include <string> 
using namespace std;
int main(){
	string st="Truong Dai Hoc Su Pham Da Nang."; 
	string st2="Su Pham";
	int found = st.find(st2);
	if(found) 
	cout<<"Su pham tim thay tai: "<<found<<endl;
	found=st.find('.');
	cout<<"Dau cham tim thay tai: "<<found<<endl;
	st.replace(st.find(st2),st2.length(),"Bach Khoa");
	cout<<st<<endl;	
} 
