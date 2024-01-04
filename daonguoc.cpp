#include <iostream>
#include <string>
using namespace std; 
int main() {
    string S,aS;
    getline(cin,S);
    for (int i=S.length()-1;i>=0;--i) {
    	aS+=S[i];
    }
    cout<<aS<<endl;
}

