#include <iostream>

int main() {
    int x1, v1, x2, v2;

    std::cout << "Nhap vao x1, v1, x2, v2: ";
    std::cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2) {
        if (x1 == x2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } else {
        double time1 = static_cast<double>(x2 - x1) / (v1 - v2);
        double time2 = static_cast<double>(x2 - x1) / (v2 - v1);

        if (time1 >= 0 && time2 >= 0 && time1 == static_cast<int>(time1) && time2 == static_cast<int>(time2)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
}
}
