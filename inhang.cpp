#include <iostream>

int main() {
    int n;
    std::cout << "Nh?p giá tr? n: ";
    std::cin >> n;

    int current_number = 1;
    int row_sum = 0;
    int exponent = 1;

    for (int i = 1; i <= n; ++i) {
        row_sum += current_number;
        std::cout << current_number << " ";

        if (i % 2 == 0) {
            current_number += exponent;
        }

        if (i % 10 == 0) {
            std::cout << "\nT?ng hàng: " << row_sum << std::endl;
            row_sum = 0;
            exponent++;
        }
    }

    return 0;
}
