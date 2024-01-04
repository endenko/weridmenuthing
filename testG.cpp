#include <bits/stdc++.h>
using namespace std;

int main() {
    string cipher[26]; // M?ng l�u chu?i m? h�a
    string s; // Chu?i m? �? m? h�a
    string result; // K?t qu? gi?i m?

    // �?c th�ng tin chu?i m? h�a
    for (int i = 0; i < 26; i++) {
        cin >> cipher[i];
    }

    // �?c chu?i m? h�a
    cin >> s;

    int n = s.length();
    int start = 0;

    // T?m v� gi?i m? t?ng �o?n m? con
    while (start < n) {
        int end = start;
        // T?m �o?n m? con
        while (end < n - 1 && s[end] <= s[end + 1]) {
            end++;
        }
        
        // Gi?i m? �o?n m? con
        for (int i = start; i <= end; i++) {
            result += cipher[s[i] - 'A'];
        }

        result += ' '; // Th�m d?u c�ch �? ng�n c�ch gi?a c�c t?

        start = end + 1;
    }

    cout << result << endl;

    return 0;
}

