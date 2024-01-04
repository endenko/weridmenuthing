#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int S(int n, int a[]) {
    if (n == 1) return a[1];
    return max(S(n - 1, a) + a[n-1], a[n-1]);
}
int a[10000]; 
int main ()
{
int n;
cin >> n;
for (int i = 1; i <= n; i++)
    cin >> a[i];
cout <<S(n, a) << endl;
}

