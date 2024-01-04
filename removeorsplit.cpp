#include <iostream>
#include <vector>
using namespace std; 
int main() {
    int n;
    cin>>n;
    vector<int>cotda(n);
    for (int i = 0; i < n; i++) {
        cin>>cotda[i];
    }
    int phantach = 0;
    for (int i = 0; i < n; i++) {
        phantach ^= cotda[i] % 2;
    }
    if(phantach == 0) {
        cout<<"Alice"<<endl;
    } else {
        cout<<"Bob"<<endl;
    }
}

