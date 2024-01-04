#include <iostream>
#include <vector>
using namespace std;
long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
long long countArrangements(int n) {
    long long totalArrangements = 0;
    for (int m = 0; m <= n; ++m) {
        long long arrangementsWithMRed = binomialCoefficient(n + 1, m);
        totalArrangements += arrangementsWithMRed;
    }
    return totalArrangements;
}

int main() {
    int n;
    cout << "Nhap so luong ghe (n): ";
    cin >> n;
    
    long long result = countArrangements(n);
    
    cout << "So cach xep ghe theo yeu cau la: " << result << endl;
    
    return 0;
}

