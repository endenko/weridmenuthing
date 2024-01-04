#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
    long long n;
    cin >> n;

    int k = 0;
    while (n > 0) {
        n /= 10;
        k++;
    }

    cout<<k<<endl;

    return 0;
}

