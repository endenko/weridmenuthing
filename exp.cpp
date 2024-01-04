#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        int result = std::min(std::abs(a - b) + std::abs(b - c) + std::abs(c - a), std::min(std::abs(a + b + c), std::abs(a * b * c)));
        std::cout << result << std::endl;
    }

    return 0;
}
