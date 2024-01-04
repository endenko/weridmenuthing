#include <iostream>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	int a[n];
	for(int i = 1; i<=n;i++){
	cin>>a[i];
	if(a[i] % 2 !=0){
		s+=a[i];
		}
	}
	cout<<s;
}
