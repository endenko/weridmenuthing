#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a =b;
	b= temp;
}

int main ()
{
	int x,y;
	cin >>x>>y;
	swap(x,y);
	cout<<x<<" "<<y; 
}

