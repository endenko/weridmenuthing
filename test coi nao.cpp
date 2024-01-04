#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
	void phantich(int n){
		if(n<=1){
			cout<<"ko co thua so ";
			return;
		}
		for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n != 1) {
                cout << " x ";
            }
	}
}
}
int main ()
{
		int n;
		cout<<"moi ban nhap so nguyen a : "<<endl;cin>>n;
		phantich(n);
}

