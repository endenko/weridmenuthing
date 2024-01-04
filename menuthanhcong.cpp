#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>

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

	float Max(float x,float y)	{
	if(x > y) 
	{
	 return x; 
	} 
	 else
	{
	 	return y; 
	}
}
	void Baitap1 (){
	system("cls");
		float x,y;
		cout<<endl<<"moi nhap x = ";
		cin>>x;
		cout<<endl<<"moi nhap y = ";
		cin>>y;
		cout<<"so lon nhat la : "<<Max(x,y)<<endl;  
	} 
	float Max2(float a,float b,float c ){
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
	void Baitap2 (){
		system("cls");
		float a,b,c;
		cout<<endl<<"moi nhap a = ";cin>>a;
		cout<<endl<<"moi nhap b = ";cin>>b;
		cout<<endl<<"moi nhap c = ";cin>>c;
		float max=Max2(a,b,c);
		cout<<endl<<"so lon nhat la : "<<max<<endl;
	}
char Lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}
	void Baitap3(){
	system("cls");
    char C, A;
	cout << "moi ban nhap ky tu : ";
	cin >> C;
    A = Lower(C);
    cout<< " "<<A<<endl;
}
	bool Prime(int n){
		if (n<2)
	{
	return false;
	} 
	else
	{
		for (int i = 2; i <= sqrt(n); ++i) 
		if (n % i == 0)
		{
			return false;
		} 
	}
	return true;
}
	void Baitap4(){
		system("cls");
		int a,k;
		cout<<"moi ban nhap a : "<<endl;cin>>a;
		k = Prime(a);
		cout<<"a la : "<<Prime(a)<<endl;
	}
	bool perfect(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0){
	s+=i;
	}
	if (s!=n){
	return false;
			}
	else if(s==n){
	return true;
	}
}
	void Baitap5(){
		system("cls");
		int a,k;
		cout<<"moi ban nhap a : "<<endl;cin>>a;
		k = perfect(a);
		cout<<"a la : "<<perfect(a)<<endl;
	}
	void phantich(int n){
		if(n<=1){
			cout<<"ko co thua so ";
			return;
		}
		for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n != 1) {
                cout << " x ";
            }
	}
}
}
	void Baitap6(){
		system("cls");
		int a;
		cout<<"moi ban nhap so nguyen a : "<<endl;
		cin>>a;
		phantich(a);
	}
	int UCLN(int a,int b)
{
	if(a==b) return a;
	else if(a>b) return UCLN(a-b,b);
	     else return UCLN(a,b-a);
}
void Baitap7()
{
 		system("cls");
  		int a,b;
 	 	cout<<endl<<"Tim UCLN cua 2 so a,b";
  		cout<<endl<<"a = "; cin>>a;
 	 	cout<<endl<<"b = "; cin>>b;
  		cout<<"UCLN(a,b) = "<<UCLN(a,b)<<endl; 
}
	int gcd(int a,int b){
		if (b==0){
			return a; 
		}else{
			return gcd(b,a%b); 
		} 
	} 
	int BCNN(int a,int b)
	{
		if(a <= 0 || b <= 0){
			return -1; 
		} 
		return (a*b)/gcd(a,b);
	} 
	void Baitap8()
	{
		system("cls");
		int a,b; 
		cout<<endl<<"Tim boi so chung nho nhat cua 2 uoc so";
		cout<<endl<<"a = "; cin>>a;
  		cout<<endl<<"b = "; cin>>b;
		cout<<"BCNN(a,b) = "<<BCNN(a,b)<<endl; 
	 }
	 int uCLN(int a,int b){
	 	while (b!=0){
	 		int temp = b;
			a = a % b;
			a = temp; 
		 } 
		return a; 
	 } 
	 void toigian(int a,int b,int Tu,int Mau){
	 	int ucln = uCLN(a,b);
	 	Tu = a/ucln; 
	 	Mau = b/ucln; 
	 }
	 void Baitap9(){
	 	system("cls");
	 	int a,b,Tu,Mau; 
	 	cout<<"moi ban nhap phan so a/b : "<<endl; 
	 	cin>>a>>b;
		 toigian(a,b,Tu,Mau);
		 cout<<"phan so toi gian la : "<<Tu<<"/"<<Mau<<endl; 
	 } 
	 long long CKN(int k,int n){
	 	if (k == n || k == 0 ){
	 		return 1; 
		 } 
	 	return CKN(k-1,n-1)+CKN(k,n-1); 
	 } 
	 void Baitap10(){
	 	system("cls");
	 	int k,n;
		cout<<"moi ban nhap k : "<<endl;cin>>k; 
		cout<<"moi ban nhap n : "<<endl;cin>>n;
		if (k<0||n<0||k>n){
			cout<<"khong hop le"<<endl;
		} 
		else{
			long long q = CKN(k,n);
			cout<<"C("<<k<<","<<n<<") = "<<q<<endl; 
		} 
	 }
	 int A(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	else if (n == 0) {
		return A(m - 1, 1);
	}
	else {
		return A(m - 1, A(m, n - 1));
	}
}
void Baitap11()
{  
	system("cls");
	int m, n;
	cin >> m>>n;
	cout << A(m, n);
	_getch();
}
	 int Fibo1(int n)
{
	if(n==1||n==2) return 1;
	else return Fibo1(n-1) + Fibo1(n-2);
}

void Baitap12()
{
  system("cls");
  cout<<endl<<"Tinh so hang thu n cua day Fibonaci";
  int n;
  cout<<endl<<"Nhap n = "; cin>>n;
  cout<<"So Fibonaci thu "<<n<<" la:"<<Fibo1(n)<<endl;
}
void subMenuA() {
    char choice;
    int n;
	int res = 0;  
    cout << "Chon mot tuy chon trong menu :" << endl;
    cout << "1. lua chon A : xu ly bang de quy" << endl;
    cout << "2. lua chon B : xu ly khong de quy" << endl;
    cin >> choice;
    switch (choice) {
        case '1':
    	case 'a':
		case 'A': 
            cout<< "ban da chon tuy chon a xu ly bang de quy" << endl;
        	cout<<"moi ban nhap so nguyen duong : "<<endl;cin >> n;
            while (n > 0) {
                int tmp = n % 10;
                res = res * 10 + tmp;
                n = n / 10;
            }
    		cout <<"so dao nguoc bang de quy la : "<<res<<endl;
            break;
        case '2':
       	case 'b':
        case 'B':
            cout << "ban da chon lua chon B " << endl;
			cout<<"moi ban nhap so nguyen duong : "<<endl;cin >> n;
    		while(n > 0){
        	int tmp = n % 10;
       	 	res = res * 10 + tmp;
        	n = n / 10;
    		}
    		cout <<"so dao nguoc khong dung de quy la : "<<res<<endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}
	void Baitap13()
	{
	system("cls");
	subMenuA();
	 } 

bool boolDoixung(int n) {
	int temp = n;
	int soDao = 0;
	while (temp != 0) {
		soDao = soDao * 10 + temp % 10;
		temp /= 10;
	}
	return (n == soDao);
}
void Baitap15()
{
	system("cls");
	int n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	if (boolDoixung(n))
		cout << n << " la so doi xung."<<endl;
	else
		cout << n << " khong phai la so doi xung."<<endl;
	_getch();
}
void subMenuB() {
    char choice;
    int n;
	int dem=0; 
    cout << "Chon mot tuy chon trong menu :" << endl;
    cout << "1. lua chon A : xu ly bang de quy" << endl;
    cout << "2. lua chon B : xu ly khong de quy" << endl;
    cin >> choice;

    switch (choice) {
        case '1':
        case 'a':
        case 'A':
            cout << "ban da chon lua chon A " << endl;
        	cout<<"moi ban nhap so nguyen duong : ";cin >> n;
            while (n != 0) {
				dem++;
				n /=10;
            }
 			cout <<"chu so co trong so ban vua nhap bang de quy la : "<<dem<<endl;
            break;
        case '2':
       	case 'b':
        case 'B':
            cout << "ban da chon lua chon A " << endl;
        	cout<<"moi ban nhap so nguyen duong : ";cin >> n;
            while (n != 0) {
				dem++;
				n /=10;
            }
 			cout <<"chu so co trong so ban vua nhap khong bang de quy la : "<<dem<<endl;
            break;
    }
}
	void Baitap14()
	{
	system("cls");
	subMenuB(); 
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
  char ch, *st[20]; //Ghi cac dong menu
  system("cls");
  st[0] = "So lon nhat trong hai so";
  st[1] = "So lon nhat trong ba so";
  st[2] = "Chu hoa thanh thuong";
  st[3] = "So nguyen to";
  st[4] = "So hoan thien";
  st[5] = "Phan tich ra thua so nguyen to";
  st[6] = "UCLN";
  st[7] = "BCNN";
  st[8] = "Toi gian";
  st[9] = "CKN";
  st[10] = "Ackerman";
  st[11] = "Fibo";
  st[12] = "Dao so";
  st[13] = "Dem so";
  st[14] = "Doi xung";
  st[15] = "<ESC> Ket thuc chuong trinh!";
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
          Baitap1();
          break;
        case 1:
          Baitap2();
          break;
        case 2:
          Baitap3();
          break;
        case 3:
          Baitap4();
          break;
        case 4:
          Baitap5();
          break;
        case 5:
          Baitap6();
          break;
        case 6:
          Baitap7();
          break;
        case 7:
          Baitap8();
          break;
        case 8:
          Baitap9();
          break;
        case 9:
          Baitap10();
          break;
        case 10:
          Baitap11();
          break;
        case 11:
          Baitap12();
          break;
        case 12:
          Baitap13();
          break;
        case 13:
          Baitap14();
          break;
        case 14:
          Baitap15();
          break;
        case 15:
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

