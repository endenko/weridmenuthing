#include <iostream>
using namespace std;

int countWays(int N, int K) {
    int dp[N+1][K+1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            if (j == 0) {
                dp[i][j] = 0;
            } else if (i == 0 && j > 0) {
                dp[i][j] = 1;
            } else if (i < j) {
                dp[i][j] = dp[i][i];
            } else {
                dp[i][j] = dp[i][j-1] + dp[i-j][j];
            }
        }
    }
    return dp[N][K];
}

int main() {
    int N,K;
    cin>>N;cin>>K;
    int result = countWays(N, K);
    cout<<result<<endl;
    return 0;
}
