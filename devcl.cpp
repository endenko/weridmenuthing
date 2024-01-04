#include <bits/stdc++.h>
#include <vector> 
using namespace std;
int main()
{
	long n,s=0;
	cin>>n;
	vector<int> a(n); 
	for(long i =0;i<n;i++){
	cin>>a[i]; 
	s+=i;
	}
	double z = s/n;
	
	sort(a.begin(),a.end());
	int q;
	if(n%2==0){
		q=(a[n / 2 - 1]+a[n / 2])/ 2.0;
    }
	else {
        q = (a[n / 2]);
    } 
	cout<<z<<endl;
	cout<<q<<endl;	
	
} 
