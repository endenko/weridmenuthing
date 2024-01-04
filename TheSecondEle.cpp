#include <iostream>
using namespace std;
int n, a[100000];
main()
{
    cin>> n;
    int Max,Max2;
    Max=a[0];
    for(int i=0;i<n;i++) 
	    {
		cin>>a[i];  
        if(Max<a[i])  
		{ 
			Max2=Max; 
			Max=a[i];
		}
		else if(Max2<a[i]&&a[i]<Max) 
		Max2=a[i];
		} 
	cout<<Max2;	     
}

