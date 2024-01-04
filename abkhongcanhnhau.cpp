#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int a = 1, b = 1;
    int result;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

void baitap12() {
    int n;
    cout << "Moi ban nhap so n trong day Fibonacci: ";
    cin >> n;
    cout << "Day so Fibonacci thu " << n << " la: " << fibonacci(n) << endl;
}

int main() {
    baitap12();
    return 0;  // You missed a return statement here
}

