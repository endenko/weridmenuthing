#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
string loop(string& Q,int k) {
    string Sb=Q.substr(0,k);
    string Se=Q.substr(k);  
    reverse(Sb.begin(),Sb.end());
    reverse(Se.begin(),Se.end());
    return Sb+Se;
}
int main() {
	ifstream f("LETTER.INP");
	ofstream fo("LETTER.OUT");
    string Q;
    int k;
	f>>Q>>k;
    string result = loop(Q,k);
    fo<<result<<endl;
}

