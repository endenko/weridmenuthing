#include <bits/stdc++.h> 
using namespace std;
 
int Arrmax(int n,int a[]) 
{
	if (n==1) return a[n];
	else return max(a[n],Arrmax(n-1,a)); 
} 
 
int main(){
	int n = 5,a[]={0,1,2,8,2,1};
	cout<<Arrmax(n,a); 
} 
