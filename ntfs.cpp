#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
int main ()
{
	ifstream f("NTFS.INP");
	ofstream fo("NTFS.OUT");
	long long n;
	long long byte = 4096;
	f>>n;
	long long kb = ceil((double)n/byte)*(byte/1024);
	fo<<kb;
}

