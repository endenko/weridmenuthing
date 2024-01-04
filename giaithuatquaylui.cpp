#include <bits/stdc++.h>
using namespace std;
int n,x[20];
bool b[20];  
void Init(){
	cout<<"nhap n = ";
	cin>>n;
	for(int i=1;i<=n;i++) b[i]=true;
} 
void inketqua()
{
	for(int i =1;i<=n;i++)
	cout<<x[i];
	cout<<endl; 
} 
void Thu(int k)
{
	for(int j=1;j<=n;j++)
	{
		if(b[j])
		{
			x[k]=j; 
			b[j]=false;
			if(k==n) inketqua(); 
			else Thu(k+1);
			b[j]=true;
		} 
	} 
} 
int main(){
	Init();
	Thu(1); 
} 
