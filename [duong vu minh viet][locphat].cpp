#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

bool locphat(long long n) {
    while (n > 0) {
        int a = n % 10;
        if (a != 6 && a != 8 && a != 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main ()
{
	int a;
	cin>>a;
	if(locphat(a)){
		cout<<"YES";
	}
	else{
		cout<<"NO"; 
	} 
}

