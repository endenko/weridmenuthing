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

int main()
{
nhap();
sort(a,a+n);
int dem = 1;
for (int i =1 ;i<n;i++)
if(a[i]!=a[i-1])dem++;

cout<<dem; 
    return 0;
}
