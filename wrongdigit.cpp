#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int nhamso1(int n) {
    int s = 0;
    int z = 1;
    while (n > 0) {
        int t = n % 10;
        if (t == 5) {
            s += 6 * z;
        } else {
            s += t * z;
        }
        z *= 10;
        n /= 10;
    }
    return s;
}

int nhamso2(int n) {
    int s = 0;
    int z = 1;
    while (n > 0) {
        int t = n % 10;
        	if (t == 6) {
            s += 5 * z;
        } else {
            s += t * z;
        }
        z *= 10;
        n /= 10;
    }
    return s;
}

int main ()
{
	int a,b;
	cin>>a>>b;
	int s = a + nhamso1(b);
	int w = a + nhamso2(b); 
	cout<<w<<" "<<s; 
	} 

