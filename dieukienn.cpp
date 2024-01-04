#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 0 || (n < 0 && n % 3 == 0)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

