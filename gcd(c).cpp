#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> free_days(n);
    for (int i = 0; i < n; ++i) {
        cin >> free_days[i];
    }

    vector<int> tests(m);
    for (int i = 0; i < m; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        int low = 0, high = free_days[n - 1];

        while (low < high) {
            int mid = (low + high) / 2;
            int cnt = 0;
            int last = 0;

            for (int j = 0; j < n; ++j) {
                if (free_days[j] - last >= x && free_days[j] - last <= y) {
                    cnt++;
                    last = free_days[j];
                }
            }

            if (cnt >= z) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        tests[i] = (low == free_days[n - 1]) ? -1 : low;
    }

    for (int i = 0; i < m; ++i) {
        cout << tests[i] << endl;
    }

    return 0;
}

