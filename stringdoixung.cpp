#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        // Chuy?n s? nguyên thành chu?i
        std::string str_x = std::to_string(x);
        
        // So sánh chu?i v?i chu?i ð?o ngý?c
        return str_x == std::string(str_x.rbegin(), str_x.rend());
    }
};

int main() {
    int num;
    std::cout << "Nh?p m?t s? nguyên: ";
    std::cin >> num;

    Solution solution;
    bool result = solution.isPalindrome(num);

    if (result) {
        std::cout << num << " là s? ð?i x?ng." << std::endl;
    } else {
        std::cout << num << " không là s? ð?i x?ng." << std::endl;
    }

    return 0;
}

