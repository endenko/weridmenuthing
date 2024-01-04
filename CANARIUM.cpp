#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        vector<int> diff(n + 2, 0);

        // Initialize the prefix difference array
        for (int i = 0; i < k; i++) {
            diff[i] = 1;
            diff[i + n - k + 1]--;
        }

        // Calculate the prefix sum of differences
        for (int i = 1; i <= n; i++) {
            diff[i] += diff[i - 1];
        }

        int ans = 0;

        // Calculate the answer based on the prefix differences
        for (int i = l; i <= r; i++) {
            ans += (diff[i] == 0);
        }

        cout << ans << endl;
    }
    return 0;
}

