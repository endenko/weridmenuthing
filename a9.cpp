#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

bool songuyento(int n) {
    if (n < 2 ) {
        return false;
    }
    for (int i = 2; i<= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


bool perfect(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0){
	s+=i;
	}
	if (s!=n){
	return false;
			}
	else if(s==n){
	return true;
	}
}

int main() {
    long long n,s= 0;
    do{
        cin >> n;
        if (perfect(n)) {
            s+= n;
        }
    }while(!songuyento(n)); 
    cout<<s;
    return 0;
}

