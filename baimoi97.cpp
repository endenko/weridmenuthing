#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int a,s=0;
	do 
	{
		cout<<"Nhap a = ";cin>>a;
		s+=a;	
	}	
	while (a!=0);
	cout<<"Tong cac so vua nhap la : "<<s; 
}

