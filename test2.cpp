#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	int m,n,a[100][100],b[100][100];

void nhap1() {
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j]; 
        }
    }
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j]; 
        }
    }  
}


void inmang(){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]+b[i][j]<<" ";
    	}
    	cout<<endl; 
	}	
}
int main ()
{
	 nhap1();
	 inmang(); 
}

