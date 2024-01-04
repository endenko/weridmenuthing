#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[250][250];
    int B[250][250];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int sum = 0;
            for (int x = 0; x <= i; x++) {
                for (int y = 0; y <= j; y++) {
                    sum += A[x][y];
                }
            }
            B[i][j] = sum;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



