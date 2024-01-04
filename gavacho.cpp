#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int ga, tho;
    bool found = false;
    for (ga = 0; ga <= m; ga++) {
        tho = m - ga;
        if (2 * ga + 4 * tho == n) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "ga = " << ga << endl;
        cout << "tho = " << tho << endl; 
    } else {
        cout << -1 << endl;
    }
    return 0;
}



