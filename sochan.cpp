#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream f ("sochan.txt");
	int n=5;
	f<<n<<endl;
	for(int i=1;i<=n;i++)
	f<<2*i<<" ";
	f.close(); 
} 
