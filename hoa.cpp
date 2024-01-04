#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxFlowers = 0;
    for (int expensiveFlowerCount = 0; expensiveFlowerCount <= c / a; expensiveFlowerCount++) {
        int remainingBudget = c - (expensiveFlowerCount * a);
        int cheapFlowerCount = remainingBudget / b;
        int totalFlowers = expensiveFlowerCount + cheapFlowerCount;
        maxFlowers = max(maxFlowers, totalFlowers);
    }

    cout << maxFlowers << endl;

    return 0;
}






