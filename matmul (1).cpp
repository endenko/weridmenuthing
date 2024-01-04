#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][n], B[n][n], C[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
        	C[i][j]=0;
        	for(int k=0;k<n;k++)
            C[i][j] += A[i][k] * B[k][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
