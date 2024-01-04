#include <bits/stdc++.h>
#include <fstream> 
using namespace std;
int main ()
{
	ifstream f("GATHO.INP");
	ofstream fo("GATHO.OUT");
    int m, n;
    f>>m>>n;
    int x, y;
    x = (4 * m - n) / 2;
    y = m - x;
    if (n % 2 == 0 && x >= 0 && y >= 0) {
        fo<<x<<" "<<y;
    } else {
        fo<< -1 << endl;
    }
}






