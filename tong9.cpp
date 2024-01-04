#include <iostream>
#include <vector> 
using namespace std;
int Sum(long long x) {
    int sum=0;
    while (x>0) {
        sum += x % 10;
        x /=10;
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
	vector<long long> a(n); 
    for(int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int s = 0;
    for (int i=0;i<n;++i){
        for (int j = i +1;j<n;++j) {
            if ((Sum(a[i])+Sum(a[j]))%9==0) {
                s++;
            }
        }
    }
    cout<<s<<endl;
}

