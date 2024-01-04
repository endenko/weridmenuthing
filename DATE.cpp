#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int ngay,thang,nam,tam;
	cin>>ngay>>thang>>nam;
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			tam = 31;
		    break;
		case 2:
			if (((nam%4==0) and (nam%100 !=0))or (nam%400==0))
			tam = 29 ;else tam =28;       
            break;
		case 4  : case 6: case 9: case 11: 
			tam = 30;
		    break;
			}
	ngay = (ngay%tam)+1;
    if((ngay==1) and (thang != 12) )3 
    	thang= thang +1;
    else if ((ngay==2) and (thang==12)) 
    	{ngay= 1;
		thang = 1 ;
		nam = nam +1; 
		}
    cout<<ngay<<" "<<thang<<" "<<nam;
    
}
