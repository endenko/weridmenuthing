#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std; 

int countRepeatedStrings(int N, const vector<string>& strings) {
    int count = 0;
    unordered_set<string> uniqueStrings;

    for (const string& str : strings) {
        string repeatedString = str + str;
        if (uniqueStrings.count(repeatedString) > 0) {
            count++;
        }
        uniqueStrings.insert(repeatedString);
    }

    return count;
}

int main() {
    int N;
    cin >> N;
    vector<string> strings(N);
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }
    int result = countRepeatedStrings(N, strings);
    cout << result << endl;
    return 0;
}

