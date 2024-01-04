#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, dem = 1;
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
        dem++;
    }
    if (b == n) {
        return dem;
    } else {
        return -1;
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
	for(int i = 1;i<=n;i++){
	cin>>a[i]; 
    int Ktra = Fibonacci(a[i]);
    if (Ktra != -1) {
        cout<<Ktra<<endl; 
    	} else {
        cout <<"-1"<<endl;
    	}
	}
}

