#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long n;
	cin>>n;
	int sl = 0;
	int s = 0;
	while(n != 0)
	{
		sl++;
		s += n % 10; 
		n /= 10; 
	 } 
	 cout<<sl<<" "<<s; 
	return 0; 
}

