#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{

    int n;
    cin >> n;
    double a = n * 2.0 / 3.0;
    double b = sqrt(n / a);
    cout <<fixed<<setprecision(2);
	cout <<a<<" "<<b;
}

