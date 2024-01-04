#include<bits/stdc++.h> 
using namespace std; 
int main() {
    int n,a[n];
    cin>>n;
    int min=1e9 ;  
    for (int i=1;i<=n;i++)
    {
	
        cin>>a[i];
       if(a[i]>0){
       	 if (a[i]%2!=0)
			{
			if ( a[i] < min)
			min=a[i] ;
		}
	}
}
	    int sophantuchan=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]%2==0) {
							sophantuchan ++; 
			}
		 } 
		 if (sophantuchan == n) min=-1; 
		
	
	cout<<min; 
}

