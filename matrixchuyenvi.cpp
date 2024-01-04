#include <iostream>

using namespace std;

int main() {
    long n,m;
    cin >> n >> m;
    long a[n][m];

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long b[m][n];
    for (long i = 0; i < n; i++) {
        for (long j = 0; j < m; j++) {
            b[j][i] = a[i][j];
        }
    }
    for (long i = 0; i < m; i++) {
        for (long j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
