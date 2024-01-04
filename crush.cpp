#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    getline(cin, S);
    string from = "crush";
    string to = "ban";
    size_t pos = 0;
    while ((pos = S.find(from, pos)) != string::npos) {
         S.replace(pos, from.length(), to);
         pos += to.length();
    }
    cout << S;
}

