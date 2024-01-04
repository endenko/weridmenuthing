#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

void max(){
	int n; 
	cin>>n; 
	int a[n]; 
	for(int i =1;i<=n;i++)
	{
	 cin>>a[i]; 
	}
	if (a[i]>a[i])
	{
		delete a[i]; 
	} 
	int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        }
		cout << sum << endl;
    }
int main ()
{
	max(); 
}

