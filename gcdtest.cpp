
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> freeDays(n);
    for (int i = 0; i < n; i++) {
        cin >> freeDays[i];
    }

    vector<int> tests(m);
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        int earliestDate = -1;
        for (int j = 0; j < n - z + 1; j++) {
            if (freeDays[j + z - 1] - freeDays[j] >= x && freeDays[j + z - 1] - freeDays[j] <= y) {
                earliestDate = freeDays[j + z - 1];
                break;
            }
        }

        tests[i] = earliestDate;
    }

    int maxDate = *max_element(tests.begin(), tests.end());
    cout << maxDate << endl;

    return 0;
}
