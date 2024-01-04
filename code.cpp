#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    if (input.empty()) {
        cout << input << endl;
        return 0;
    }

    char currentChar = input[0];
    int charCount = 1;

    for (int i = 1; i < input.size(); i++) {
        if (input[i] == currentChar) {
            charCount++;
        } else {
            if (charCount > 1) {
                cout << charCount << currentChar;
            } else {
                cout << currentChar;
            }
            currentChar = input[i];
            charCount = 1;
        }
    }

    if (charCount > 1) {
        cout << charCount << currentChar;
    } else {
        cout << currentChar;
    }

    cout << endl;

    return 0;
}

