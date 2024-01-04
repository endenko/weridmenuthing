#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long arr[10000]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isSuperIncreasing = true;
    long long sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] <= sum) {
            isSuperIncreasing = false;
            break;
        }
        sum += arr[i];
    }
    if (isSuperIncreasing) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }
    return 0;
}

