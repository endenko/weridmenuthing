#include <iostream>
#include <fstream> 
using namespace std;
int main(){
	ofstream f ("Vidu.txt");
	f<<"cach ghi file txt"<<endl;
	int a= 10,b=30;
	float x = 3.25;
	f<<a<<" "<<b<<endl;
	f<<x;
	f.close();  
} 
