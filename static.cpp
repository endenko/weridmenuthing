#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

	
	void inc() 
	{	
		int j=1;
		static int k =1;
		j++;
		k++;
		cout<<"j : "<<j<<" k : "<<k<<endl; 
	}
int main ()
{
 inc();
 inc();
 inc(); 
}

