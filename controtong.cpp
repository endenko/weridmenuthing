#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int a[1000001],n;
void nhap(int &n,int *a){
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i]; 
} 
int sum(int n,int *a){
	int s =0;
	for(int i=0;i<n;i++)s+=a[i];	
	return s; 
} 
int main ()
{
	int a[100],n;
	nhap(n,a);
	cout<<sum(n,a); 
}

