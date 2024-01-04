#include<iostream>
#include<fstream>
using namespace std;
bool Lap(string s) {
    int n = s.length();
    for (int len = 1; len <= n / 2; ++len) {
        if (n % len != 0) continue;
        string t = s.substr(0, len);
        int i;
        for (i = len; i < n; i += len) {
            if (s.substr(i, len) != t) break;
        }
        if (i == n) return true;
    }
    return false;
}

int main(){
    ifstream f("WLOOP.INP");
    ofstream f0("WLOOP.OUT");
    int n;
    f >> n;int count = 0; 
    for (int i = 0; i < n; ++i) {
        string s;
        f >> s;
        if (Lap(s)) ++count;
    }
    f0 << count << endl;
    return 0;
}