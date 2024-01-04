#include <iostream>
#include <string>
using namespace std;
string X="ceaceec",Y="aececa"; 
int L(int i,int j){ 
	if(i<0 || j<0)return 0;
	else if( X[i] == Y[j]) return 1+L(i-1,j-1);
	else return max(L(i-1,j),L(i,j-1)); 
} 
int main ()
{
	int a = X.length()-1;
	int b = Y.length()-1;
	cout<<endl<<"de quy : L = "<<L(a,b);  
}

