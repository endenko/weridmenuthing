#include <iostream>
#include <fstream>
using namespace std;
int n,a[1000001];
main(){
	ifstream f ("sochan.txt");
	f>>n;
	for(int i=1;i<=n;i++)
	f>>a[i];
	f.close();
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
} 
