#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long countSequences(long long N) {
    long long result = 1;
    long long current = 2;
    
    while (current * current <= N) {
        long long power = 0;
        while (N % current == 0) {
            N /= current;
            power++;
        }
        
        if (power > 0) {
            result *= (power + 1);
        }

        current++;
    }
    
    if (N > 1) {
        result *= 2;
    }
    
    return result;
}

int main() {
    long long T;
    cin >> T;

    for (long long t = 0; t < T; t++) {
        long long N;
        cin >> N;

        long long result = countSequences(N);
        cout << result << endl;
    }

    return 0;
}

