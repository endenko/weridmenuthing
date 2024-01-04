#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        // Chuy?n s? nguy�n th�nh chu?i
        std::string str_x = std::to_string(x);
        
        // So s�nh chu?i v?i chu?i �?o ng�?c
        return str_x == std::string(str_x.rbegin(), str_x.rend());
    }
};

int main() {
    int num;
    std::cout << "Nh?p m?t s? nguy�n: ";
    std::cin >> num;

    Solution solution;
    bool result = solution.isPalindrome(num);

    if (result) {
        std::cout << num << " l� s? �?i x?ng." << std::endl;
    } else {
        std::cout << num << " kh�ng l� s? �?i x?ng." << std::endl;
    }

    return 0;
}

