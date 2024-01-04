#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	int m,n,a[100][100];

void nhap() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

int tong(){
	int s=0;
	for(int i=0;i<m;i++) 
	{
		int Maxline = a[i][0];  
		for(int j = 1;j<n;j++)
			if(Maxline<a[i][j]) Maxline=a[i][j]; 
		s+=Maxline; 
	}
	return s; 
} 

int main ()
{
	 nhap();
	 cout<<tong()<<endl; 
}

