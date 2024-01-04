#include <bits/stdc++.h>
using namespace std;

int main() {
    string cipher[26]; // M?ng lýu chu?i m? hóa
    string s; // Chu?i m? ð? m? hóa
    string result; // K?t qu? gi?i m?

    // Ð?c thông tin chu?i m? hóa
    for (int i = 0; i < 26; i++) {
        cin >> cipher[i];
    }

    // Ð?c chu?i m? hóa
    cin >> s;

    int n = s.length();
    int start = 0;

    // T?m và gi?i m? t?ng ðo?n m? con
    while (start < n) {
        int end = start;
        // T?m ðo?n m? con
        while (end < n - 1 && s[end] <= s[end + 1]) {
            end++;
        }
        
        // Gi?i m? ðo?n m? con
        for (int i = start; i <= end; i++) {
            result += cipher[s[i] - 'A'];
        }

        result += ' '; // Thêm d?u cách ð? ngãn cách gi?a các t?

        start = end + 1;
    }

    cout << result << endl;

    return 0;
}

