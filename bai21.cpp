#include <iostream>
using namespace std; 
int main() {
    int k;
    cin >> k;
    int c= 0;
    int n= 10;

    while (c < k) {
        if (n % 10 + n / 10 == 10) {
            cout<<n<<" ";
            c++;
        }
        n++;
    }
    return 0;
}






