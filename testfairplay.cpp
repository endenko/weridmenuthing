#include <iostream>
#include <vector>
using namespace std;
void doi(long &a, long &b) {
    long t = a;
    a = b;
    b = t;
}
void xep(vector<long>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[m] > a[j]) m = j;
        }
        doi(a[m], a[i]);
    }
}

int maxdiem() {
    int n;
    cin >> n;
    vector<long> a(n);
    vector<long> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
       	cin >> b[i];
    }
    xep(a);
    xep(b);
    int max = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (j == n) break;
        while (j < n) {
            if (b[j] > a[i]) {
                max++;
                break;
            }
            else {
                j++;
            }
        }
    }
    return max;
}

int main() {
    cout<<maxdiem();
    return 0;
}

