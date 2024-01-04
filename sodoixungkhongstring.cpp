#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original_x = x;
        int reversed_x = 0;

        while (x > 0) {
            reversed_x = reversed_x * 10 + x % 10;
            x /= 10;
        }

        return original_x == reversed_x;
    }
};

int main() {
    int num;
    cout << "Nh?p m?t s? nguy�n: ";
    cin >> num;

    Solution solution;
    bool result = solution.isPalindrome(num);

    if (result) {
        cout << num << " l� s? �?i x?ng." <<endl;
    } else {
        cout << num << " kh�ng l� s? �?i x?ng." <<endl;
    }
    return 0;
}

