#include <iostream>
using namespace std;

int main() {
	
	freopen("MAX3.INP", "r", stdin);
    freopen("MAX3.OUT", "w", stdout);
    long long a, b, c;
    cin >> a >> b >> c;

    long long max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "So lon nhat: " << max << endl;

    return 0;
}
