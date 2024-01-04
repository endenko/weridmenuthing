#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	if( n<0 && n > 86399)
	{
	return 1;
	}
	int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;
    if (h<10){
		cout<<"0"; 
	} 
    cout<<h<< ":";
    if (m < 10) {
        cout << "0";
    }
	cout<<m<< ":";
    if (s < 10) {
		cout << "0";
    }
    cout<<s<<endl;
}

