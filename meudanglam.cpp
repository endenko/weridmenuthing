#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;
int m,A[100],n,B[100],k,C[100];
#ifdef WIN32
void gotoxy(int x, int y)
{
  COORD cur = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
} 
#else
void gotoxy(int x, int y)
{
  printf("\033[%dG\033[%dd", x+1, y+1);
}
#endif

int textcolor(int Color)
{
  HANDLE h;
  h = GetStdHandle(STD_OUTPUT_HANDLE); 
  return SetConsoleTextAttribute(h, Color);
}

#define RED 12 
#define CYAN 3

//cau1 
bool KTra(int x,int n,int A[]){
	for(int i=1;i<=n;i++)
	if(x==A[i])return true;
	return false;
}
//cau2 
void nhap(char SetName,int &n,int A[]){
	
	cout<<endl<<"so phan tu cua tap hop "<<SetName<<" : ";cin>>n;
	int i=0,x;
	do{
		cout<<endl<<"x = ";cin>>x;
		if(!KTra(x,i,A))
		{
			i++;A[i]=x;
		}
	}
	while (i<n);
}
void Xem(char SetName,int n,int A[]){
	cout<<endl<<"Tap hop "<<SetName<<" : ";
	for(int i=1;i<=n;i++)
	cout<<" "<<A[i];
}
void bai2(){
	nhap('A',m,A);
	Xem('A',m,A);
	nhap('B',n,B);
	Xem('B',n,B);
}
void tinhtoan(char SetA,int m,int a[],char SetB,int n,int b[]){
	int sum1,sum2;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++) 
	sum1+= A[i];
	sum2+= B[j]; 
	if(sum1 == sum2){
	cout<<endl<<"tap hop a va b khong giong nhau"<<endl; 
	}  
} 
//cau4 
void Giao(char SetA,int m,int a[],char SetB,int n,int b[]){
	cout<<endl<<"Giao cua 2 tap hop "<<SetA<<" va "<<SetB<<" : ";
	for(int i=1;i<=m;i++)
		if(KTra(A[i],n,B))
			cout<<A[i]<<" ";
}

void bai4(){
	Giao('A',m,A,'B',n,B);
}




 

int main ()
{
	
}

