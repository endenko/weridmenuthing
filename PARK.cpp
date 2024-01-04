#include<bits/stdc++.h>
using namespace std;
map<int,int> mp; 
long long result(int n){
	return n<=5 ? 100 : 100+n-5; 
} 
int main(){
	int t;
	long ans = 0; 
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		mp[x]++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++it) {
		ans+=result(it move second);
    }
	cout<<ans; 
} 
