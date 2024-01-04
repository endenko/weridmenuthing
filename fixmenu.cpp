#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include <set> 

using namespace std;

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

int m,A[100],n,B[100],k,C[100];
//bai1 
bool KTra(int x,int n,int A[]){
	for(int i=1;i<=n;i++)
	if(x==A[i])return true;
	return false;
}
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
void Baitap2()
{
    system("cls");
    int x;
    cout << "\nNhap phan tu x: ";
    cin >> x;
    if (KTra(x, n, A)) {
        cout << "\nPhan tu " << x << " co trong mang A.\n";
    } else {
        cout << "\nPhan tu " << x << " khong co trong mang A.\n";
    }
    getch();
} 
void Baitap1(char SetName) {
	system("cls");
  cout << "Nhap tap hop " << SetName << ":\n";
  nhap(SetName, n, A);
  Xem(SetName, n, A);
  cout<<endl; 
}
bool areSetsEqual(int m, int A[], int n, int B[]) {
    set<int> setA(A, A + m);
    set<int> setB(B, B + n);
    return setA == setB;
}
void Baitap3(){
	system("cls");
	if (areSetsEqual(m, A, n, B)){
        cout<<endl<< "Tap A và B giong nhau"<<endl; 
    } else {
        cout<<endl<< "Tap A và B khác nhau"<<endl; 
    } 
} 
void Giao(char SetA,int m,int a[],char SetB,int n,int b[]){
	cout<<endl<<"Giao cua 2 tap hop "<<SetA<<" va "<<SetB<<" : ";
	for(int i=1;i<=m;i++)
		if(KTra(A[i],n,B))
			cout<<A[i]<<" ";
}
void Baitap4(){
		system("cls");
	Giao('A', m, A, 'B', n, B); 
} 
void Hop(int m, int A[], int n, int B[]) {
    cout <<"hop cua a và b là  : ";
    for (int i = 1; i <= m; i++)
            if (!KTra(A[i],n,B))
                cout << A[i]<<" ";
    for (int j = 1; j <= n; j++) 
            if(!KTra(B[j],m,A))
				cout << B[j]<<" ";
}
void Baitap5(){
	system("cls");
	Hop( m, A, n, B); 
} 
void HieuA(int m, int A[], int n, int B[]) {
    cout <<"Hieu cua a la : ";
    for (int i = 1; i <= m; i++){
            if (!KTra(A[i],n,B))
                cout << A[i]<<" "; 
	}cout<<endl; 
}
void HieuB(int m, int A[], int n, int B[]) {
    cout <<"Hieu cua b la : ";
    for (int j = 1; j <= n; j++){
            if (!KTra(B[j],m,A))
                cout << B[j]<<" "; 
	}cout<<endl; 
}
void Baitap6(){
	system("cls");
	HieuA(m,A,n,B);
	HieuB(m,A,n,B); 
} 
void Descartes(int m, int A[], int n, int B[]) {
cout << "Tich Descartes cua hai tap A va B: {";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << A[i] << ", " << B[j] << ")";
            if (i != m - 1 || j != n - 1) {
                cout << ", "<<endl;
            }
        }
    }
   	cout<< "}"<<endl;
}
void Baitap7(){
	Descartes(m,A,n,B); 
	system("cls");
} 
void Write(char *s,int x,int y, int color)
{
  textcolor(color);
  gotoxy(x,y); cout<<s;
  textcolor(15);
}

void Khung(int x1,int y1,int x2,int y2)
{ int x,y;
  gotoxy(x1,y1); cout<<"0";
  gotoxy(x2,y1); cout<<"0";
  gotoxy(x1,y2); cout<<"0";
  gotoxy(x2,y2); cout<<"0";
  for(x=x1+1;x<x2;x++)
  {
	gotoxy(x,y1); cout<<"=";
	gotoxy(x,y2); cout<<"=";
  }
  for(y=y1+1;y<y2;y++)
  {
	gotoxy(x1,y); cout<<"|";
	gotoxy(x2,y); cout<<"|";
  }
}
void Ve_menu(int x0,int y0,int chon,int n,char *s[])
{
  system("cls");
  Khung(x0-2,y0-1,x0+30,y0+n);
  for(int i=0;i<n;i++)
	 if(i==chon) Write(s[i],x0,y0+i,RED);
	 else Write(s[i],x0,y0+i,CYAN);
  Write("Duong vu minh viet 23spt xin chao cac ban",x0-4,y0+n+5,14);
}
int main()
{
  char ch, *st[9]; //Ghi cac dong menu
  system("cls");
  st[0] = "So lon nhat trong hai so";
  st[1] = "So lon nhat trong ba so";
  st[2] = "Chu hoa thanh thuong";
  st[3] = "So nguyen to";
  st[4] = "So hoan thien";
  st[5] = "Phan tich ra thua so nguyen to";
  st[6] = "UCLN";
  st[7] = "BCNN";
  st[8] = "<ESC> Ket thuc chuong trinh!";
  int x0 = 14, y0 = 14, chon = 0, luuchon, sodong = 15, ok = FALSE;

  while (1) {
    Ve_menu(x0, y0, chon, sodong, st);
    ch = getch(); //Nhan mot phim
    switch (ch) {
      case 72: //phim len
        luuchon = chon;
        chon--;
        if (chon < 0) chon = sodong - 1;
        Write(st[luuchon], x0, y0 + luuchon, RED);
        Write(st[chon], x0, y0 + chon, CYAN);
        break;
      case 80: //phim xuong
        luuchon = chon;
        chon++;
        if (chon == sodong) chon = 0;
        Write(st[luuchon], x0, y0 + luuchon, RED);
        Write(st[chon], x0, y0 + chon, CYAN);
        break;
      case 13: //phim ENTER
        ok = TRUE;
        break;
    }
    if (ok == TRUE) 
    {
      switch (chon) {
        case 0:
          Baitap1('A');
          Baitap1('B'); 
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 1:
          Baitap2();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 2:
          Baitap3();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 3:
          Baitap4();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 4:
          Baitap5();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 5:
          Baitap6();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 6:
          Baitap7();
          Ve_menu(x0, y0, chon, sodong, st);
          break;
        case 7:
          exit(0);
          break;
      }
      ok = FALSE;
      system("pause");
    }
    if (ch == 27) break;
  }

  return 0;
}

