#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    // Calculate the Grundy number for each pile
	vector<int> grundy(n);
	for (int i = 0; i < n; i++) {
    int pile = piles[i];
    if (pile == 1 || pile % 2 == 0) {
        grundy[i] = 1;  // If the pile has one stone or an even number of stones, Alice wins.
    } else {
        grundy[i] = 0;  // If the pile has an odd number of stones, Bob wins.
    }
}

    // Calculate the XOR of all Grundy numbers
    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= grundy[i];
    }

    if (xor_sum == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }

    return 0;
}

