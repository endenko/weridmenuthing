#include <bits/stdc++.h>

using namespace std;

const int maxN = 5e5 + 100;
const long long INF = 2e9 + 100;

int ask(int x, int y) {
    cout << "? " << x << " " << y << endl;
    int p;
    cin >> p;
    return p;
}

void sol() {
    int n;
    cin >> n;

    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++) f[i] = ask(1, i);

    vector<int> g(n + 1, 0), l(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (f[i] > f[1]) {
            g[i] = g[i - 1] + 1;
        } else {
            g[i] = g[i - 1];
        }
        l[i] = (f[i] - f[1] - g[i - 1] - g[i] + 2 * (i - 1)) / 2;
    }

    vector<int> used(n + 1, 0);
    vector<int> ans(n + 1, 0);
    for (int i = n; i >= 1; i--) {
        int j = 1;
        while (l[i] >= 0) {
            while (used[j] > 0) j++;
            if (l[i] == 0) break;
            l[i]--;
            j++;
        }
        ans[i] = j;
        used[j] = 1;
    }
    cout << "! " << ans[1];
    for (int i = 2; i <= n; i++) cout << " " << ans[i];
    cout << endl;
}

int main() {
    int t = 1;
    while (t--) sol();
}
