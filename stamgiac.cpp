#include <bits/stdc++.h>
#define pi 3.1416
using namespace std;
int main(){
	double a,b,f;
	cin>>a>>b>>f;
	double radian = f * pi / 180;
    double S = 0.5 * a * b * sin(f*pi/180);
	cout<<fixed<<setprecision(2)<<S;
}
