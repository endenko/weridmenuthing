#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string S;
    getline(cin,S);
    long long dem=0; 
 	for (int i = 0; i < S.length(); i++) {
        char ch = S[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' || ch == 'U') {
            dem++;
        }
    }
    cout<<dem<<endl;
}
