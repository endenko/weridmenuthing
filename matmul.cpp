#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	int n,a[100][100],b[100][100],c[100][100];

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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
        	c[i][j]=0;
        	for(int k=0;k<n;k++)
            c[i][j] += a[i][k] * b[k][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
	 nhap1();
	 inmang(); 
}

