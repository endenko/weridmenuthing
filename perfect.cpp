#include <iostream>
#include <cmath>

using namespace std;

// H�m ki?m tra xem m?t s? c� ph?i l� s? nguy�n t? hay kh�ng
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// H�m ki?m tra xem m?t s? c� ph?i l� s? �?i x?ng hay kh�ng
bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int A, B;
    cin >> A >> B;

    int count = 0;
    for (int num = A; num <= B; num++) {
        if (isPrime(num) && isPalindrome(num)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
