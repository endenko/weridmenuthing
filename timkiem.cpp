#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;
int n, a[1000000];
void nhap()
{
cin>>n;
for (int i =0;i<n;i++)
cin>>a[i];
}

int search(int x)
{
	for(int i=0;i<n;i++) 
		if(x==a[i]) return i; 
	return -1; 
 } 

int main()
{
nhap();
int x; 
cout<<"nhap x = ";cin>>x;
int k = search(x);
if(k>=0) cout<<"vi tri x trong mang A la "<<k;
else cout<<x<<"khong co trong mang A"; 
    return 0;
}
