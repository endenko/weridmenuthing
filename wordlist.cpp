#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    getline(cin,st);
    string word = "";
    for (int i = 0; i < st.size(); i++) {
        if (st[i] != ' ') {
            word += st[i];
        }else{
            if (!word.empty()) {
                cout<<word<<endl;
                word.clear();
            }
        }
    }
    if(!word.empty()) {
    cout << word << endl;
    }
}

