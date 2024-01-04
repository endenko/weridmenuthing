#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int T;
    cin >> T;

    while (T--) {
        int k, x;
        cin >> k >> x;

        int n = S.length();
        vector<int> charCount(26, 0);
        int distinctChars = 0;
        int result = 0;

        for (int i = 0; i < k; i++) {
            int charIndex = S[i] - 'a';
            if (charCount[charIndex] == 0) {
                distinctChars++;
            }
            charCount[charIndex]++;
        }

        if (distinctChars == x) {
            result++;
        }

        for (int i = k; i < n; i++) {
            int charIndex = S[i - k] - 'a';
            if (charCount[charIndex] == 1) {
                distinctChars--;
            }
            charCount[charIndex]--;

            charIndex = S[i] - 'a';
            if (charCount[charIndex] == 0) {
                distinctChars++;
            }
            charCount[charIndex]++;

            if (distinctChars == x) {
                result++;
            }
        }

        cout << result << endl;
    }

    return 0;
}

