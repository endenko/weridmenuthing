#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
    int n, p, q;
    cin >> n >> p >> q;
    for (int i = 1; i <= n; ++i) {
        if ((i % p == 0) or ( i % q == 0) ){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}

