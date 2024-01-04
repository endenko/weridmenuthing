#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int gio,phut,giay ;
	cin>>gio>>phut>>giay;
	if (giay == 59)
		{ phut = phut + 1;
		giay = 0;
		}
	else if ((giay >= 0 ) and (giay < 59))
		giay = giay + 1;
		
	if (phut == 60)
		{gio = gio + 1;
		phut = 0;
		}
		
	if (gio == 24)
		gio = 0;	
			
	cout<<gio<<" "<<phut<<" "<<giay;	
}
