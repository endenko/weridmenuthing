#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; 
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;++i) {
        cin>>a[i];
    }
    vector<unordered_map<int, int>> dp(n);
    int Max=1;
    for (int i=0;i<n;++i){
        for (int j=0;j<i;++j){
            int diff=a[i]-a[j];
            dp[i][diff]=max(dp[i][diff],dp[j][diff] + 1);
            Max=max(Max,dp[i][diff]);
        }
    }
    cout<<Max<<endl;
}

