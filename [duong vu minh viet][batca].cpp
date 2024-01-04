#include <iostream>
using namespace std;

int main() {
	freopen("BATCA.INP","r",stdin);
	freopen("BATCA.OUT","w",stdout);
    int k, n, m, t;
    cin >> k >> n >> m >> t;
    int q = t / k; 
    int d = q * m; 
    int z = q * (n - m);
    cout <<z<< endl;
}
