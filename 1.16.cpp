#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x1,x2,y1,y2,a,b,c;
	
	
	cin>>x1>>y1>>x2>>y2;
	
	a=y1-y2;
	b=x2-x1;
	c=-(a*x1+b*y1);
	
	if(a==0&&b==0)
	{
		cout;
	}
	else
	{
		cout<<fixed <<setprecision(2)<<a<<" "<<b<<" "<<c;
	}
	
	
	
	return 0;
}
