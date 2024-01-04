#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	int n,a[100][100];

void nhap1() {
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j]; 
        }
	}
}
void inmang(){
	int s = 0; 
    for(int i = 0; i < n; i++)
	for(int j = i+1; j < n; j++){
         s += a[i][j];
	}
	cout<<s;	
}
int main ()
{
	 nhap1();
	 inmang(); 
}

