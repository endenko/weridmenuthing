#include <iostream>
#include <vector>

using namespace std;

const int MOD = 2023;

int main() {
    int n;
    cin >> n;

    vector<int> addresses(n);

    for (int i = 0; i < n; i++) {
        cin >> addresses[i];
    }

    int Q;
    cin >> Q;

    vector<vector<int> > dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (addresses[i] < addresses[j]) {
                dp[i][j] = 1;
            }
        }
    }

    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int l = i + 1; l < j; l++) {
                    if (addresses[i] < addresses[l] && addresses[l] < addresses[j]) {
                        dp[i][j] = (dp[i][j] + dp[i][l] * dp[l][j]) % MOD;
                    }
                }
            }
        }
    }

    while (Q--) {
        int ai, aj, k;
        cin >> ai >> aj >> k;
        ai--;
        aj--;

        if (k == 0) {
            if (dp[ai][aj] > 0) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        } else {
            cout << dp[ai][aj] << endl;
        }
    }

    return 0;
}

