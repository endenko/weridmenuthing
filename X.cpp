#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n = n+3; 
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j|| i == n - j - 1 ) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
