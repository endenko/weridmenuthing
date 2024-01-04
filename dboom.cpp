#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int total_enemies = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'x') {
                total_enemies++;
            }
        }
    }

    if (total_enemies > k) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> enemies_in_row(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'x') {
                enemies_in_row[i]++;
            }
        }
    }

    int min_v = 1, max_v = m;
    int result = -1;
    while (min_v <= max_v) {
        int mid_v = (min_v + max_v) / 2;
        int bombs_needed = 0;
        for (int i = 0; i < n; i++) {
            if (enemies_in_row[i] > 0) {
                bombs_needed += (enemies_in_row[i] - 1) / (2 * mid_v) + 1;
            }
        }
        if (bombs_needed <= k) {
            result = mid_v;
            max_v = mid_v - 1;
        } else {
            min_v = mid_v + 1;
        }
    }

    cout << result << endl;

    return 0;
}
