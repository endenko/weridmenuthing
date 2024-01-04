#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,a,s = 0,q;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>a;
	if (a > s) {
            q = s;
            s = a;
        }else if (a > q && a != s) {
            q = a;
        }
	}
	cout<<q<<endl; 
    return 0;
}


