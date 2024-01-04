#include <iostream>
using namespace std; 
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int main() {
    int a, b;
    cout<<"Nhap hai so nguyen duong a va b: ";
    cin>>a>>b;
    int z=gcd(a, b);
    cout<<z<<endl;
    return 0;
}

