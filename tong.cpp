#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

long long sum(long long n)
{
    long long s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s; 
}
int main ()
{
	long long n;
	cin>>n;
	long long a = sum(n);
	cout<<a; 
}

