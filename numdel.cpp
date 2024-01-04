#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    getline(cin,n);
    string k= ""; 
    for (int i = 0; i<n.size();i++) {
        if (!isdigit(n[i])){
            k += n[i];
        }
    }
    cout<<k<<endl;
}

