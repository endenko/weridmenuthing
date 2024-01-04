#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countWaysToDeleteToPalindrome(const string& s) {
    int n = s.length();
    vector<vector<int> > dp(n, vector<int>(n, 0));

    for (int length = 1; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;

            if (length == 1) {
                dp[i][j] = 1;
            } else if (length == 2) {
                dp[i][j] = (s[i] == s[j]) ? 1 : 2;
            } else {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
                } else {
                    dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
                }
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    string s = "aabacaba";
    int result = countWaysToDeleteToPalindrome(s);
    cout << result << endl;
    return 0;
}

