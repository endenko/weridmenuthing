#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 1) {
        cout << 1 << endl;  
    } else if (n % 2 == 0){
        cout << 2 << endl;
    } else if (n % 4 == 0) {
        cout << 4 << endl;
    } else{
    	cout << -1 << endl;  
	} 

    return 0;
}

