#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
 int Fibo1(int n)
{
	if(n==1||n==2) return 1;
	else return Fibo1(n-1) + Fibo1(n-2);
}

int main()
{
  cout<<endl<<"Tinh so hang thu n cua day Fibonaci";
  int n;
  cout<<endl<<"Nhap n = "; cin>>n;
  cout<<"So Fibonaci thu "<<n<<" la:"<<Fibo1(n)<<endl;
}

