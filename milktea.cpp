#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> castle(N);
    for (int i = 0; i < N; i++) {
        cin >> castle[i];
    }

    int totalPairs = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (castle[i][j] == '.') {
                for (int x = i + 1; x < N; x++) {
                    for (int y = 0; y < M; y++) {
                        if (castle[x][y] == '.' && (i != x || j != y)) {
                            bool canSeparate = true;
                            for (int k = i; k <= x; k++) {
                                for (int l = j; l <= y; l++) {
                                    if (castle[k][l] == '#') {
                                        canSeparate = false;
                                        break;
                                    }
                                }
                            }
                            if (canSeparate) {
                                totalPairs++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << totalPairs << endl;

    return 0;
}

