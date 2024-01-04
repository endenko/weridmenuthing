#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
int main(){
	ifstream f("TIME.INP");
	ofstream fo("TIME.OUT");
	int gio,phut,giay;
	f>>gio>>phut>>giay;
	giay++;
	if(giay>59) (giay = 0,phut++);
	if(phut>59) (phut = 0,gio++);
	if(gio>23)  gio = 0;
	fo<<gio<<" "<<phut<<" "<<giay;
} 
