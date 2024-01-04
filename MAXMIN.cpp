#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
    long long min_value= 0;
	min_value = min({a,b,c,d});
    long long max_value=0; 
	max_value=max({a,b,c,d});
    cout<<min_value<<endl<<max_value<<endl;
} 
