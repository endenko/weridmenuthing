#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    double a, b;
   	cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout<<"Many Solutions"<<endl;
        } else {
            cout<< "No Solution" <<endl;
        }
    } else {
        double x =(-b) / a;
        if (fabs(x) < 0.005) {
            cout <<"0.00"<<endl;
        } 
	 cout<<fixed <<setprecision(2)<<x<<endl;
    }
return 0;
}

