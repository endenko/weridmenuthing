#include <iostream>
#include <vector>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
vector<int> prime_sum_representation(int n) {
    vector<int> primes;
    int current_num = 2;
    while (n > 0) {
        if (is_prime(current_num) && n >= current_num) {
            primes.push_back(current_num);
            n -= current_num;
        } else {
            current_num++;
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = prime_sum_representation(n);
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

