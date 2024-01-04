#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	void view100() 
	{
		for(int i = 1;i<=100;i++)
		{
			cout<<i<<" ";
			if(i%10==0) cout<<endl; 
		}
		 
	} 


int main ()
{
	view100(); 
}

