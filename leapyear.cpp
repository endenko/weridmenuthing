#include <iostream>
using namespace std;
int main() {
    int a, b;
    int sum=0;
	cin>>a>>b; 
    for(int i=a;i<=b;i++) {
        if((i%19==0)||(i%19==3)||(i%19==6)||(i%19==9)||(i%19==11)||(i%19==14)||(i%19==17)){
            sum++;
        }
    }
    cout<<sum;
}

