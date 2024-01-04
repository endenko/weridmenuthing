#include <bits/stdc++.h>
#include <fstream> 
#include <vector> 
using namespace std;
int main ()
{
	ifstream f("DAYTANG.INP");
	ofstream fo("DAYTANG.OUT");
    long n;
    f>>n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        f>>a[i];
    }
    vector<int> dp(n, 1);
    int s=1; 
	for (int i = 1; i < n; i++) {
		if(a[i]>=a[i-1]){
			dp[i]=dp[i-1] +1; 
		   		s = max(s,dp[i]); 
            }
        }
    fo<<s<<endl;
}

