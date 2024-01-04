#include <math.h> 
#include <bits/stdc++.h> 
using namespace std; 
struct Toado
{
	float x,y; 
};
float dientich(Toado A,Toado B,Toado C)
{
	float s=B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y; 
	return fabs(s)/2; 
} 
int main(){
	int A,B,C; 
	cin>>Toado(A)>>Toado(B)>>Toado(C); 
	cout<<dientich(A,B,C); 
} 
