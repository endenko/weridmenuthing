#include <bits/stdc++.h>
using namespace std;

int n,b[20];
bool stop = false;

void init()
{
	cout<<"nhap n = ";
	cin>>n;
	for(int i =1;i<=n;i++)
	b[i]=0; 
} 

void next_bit_string()
{
	int i=n;
	while(i > 0 && b[i] == 1)
	{
		b[i]=0; i--;	
	}
	if(i==0) stop=true; else b[i]=1;
} 

void generate(){
	init();
	while(!stop)
	{
	for(int i = 1;i<=n;i++)
	cout<<b[i]<<" ";
	cout<<endl; 
	next_bit_string(); 
	}
} 

int main(){
	generate(); 
} 
