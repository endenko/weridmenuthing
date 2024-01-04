#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
int main ()
{
	ifstream f("SNAIL.INP");
	ofstream fo("SNAIL.OUT");
	long long a,b,v;
	f>>a>>b>>v;
	long long S= (v-b-1) /(a-b) + 1;
	fo<<S; 
}

