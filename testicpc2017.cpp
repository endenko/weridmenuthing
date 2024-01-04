#include <iostream>
using namespace std;

const int mod = 1000000007;

int countArrangements(int n, int k, int m) {
    int dp[101][101][2] = {0};

    for (int r = 1; r <= k; r++) {
        dp[1][r][0] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int r = 0; r <= k; r++) {
            for (int w = 0; w <= m; w++) {
                if (r > 0) {
                    dp[i][r][w] = (dp[i][r][w] + dp[i - 1][r - 1][w ^ 1]) % mod;
                }
                if (w > 0) {
                    dp[i][r][w] = (dp[i][r][w] + dp[i - 1][r][w - 1]) % mod;
                }
            }
        }
    }

    int totalArrangements = 0;
    for (int w = 0; w <= m; w++) {
        totalArrangements = (totalArrangements + dp[n][k][w]) % mod;
    }

    return totalArrangements;
}

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int result = countArrangements(n, k, m);
    cout << result << endl;
    return 0;
}
