#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> money(n);
    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }
    int maxtien = 0;
    int hienco = 0;
    for (int i = 0; i < n - 1; i++) {
        hienco += money[i];
        maxtien = max(maxtien,hienco);
        
        if (hienco  < 0) { 
            hienco  = 0;
        }
    }
    
    cout << maxtien << endl;

    return 0;
}
