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

#define CYAN 10
#define AQUA 3

void Baitap0()
{
	system("cls");
	float a, b;
	cout << endl << "Nhap a = "; cin >> a;
	cout << endl << "Nhap b = "; cin >> b;
	cout << "Gia tri lon nhat trong hai so vua nhap la : " << (a > b ? a : b);
		_getch();
}
void Baitap1()
{
  system("cls");
  float a,b,c;
  cout<<endl<<"Nhap a = "; cin>>a;
  cout<<endl<<"Nhap b = "; cin>>b;
  cout <<endl << "Nhap c = "; cin >> c;
  cout <<"Gia tri lon nhat : "<< ((a > b ? a : b) > c ? (a > b ? a : b) : c);
        _getch();    
}

char lower(char a)
{
	return tolower(a);
}
void Baitap2()
{
	system("cls");
	char a;
	cout << "Nhap chu cai : "; cin >> a;
	cout << "Sau khi chuyen : " << lower(a);
	_getch();
}
bool SNT(int n) 
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void Baitap3()
{
	system("cls");
	int n;
	cout << "Nhap so : ";
	cin >> n;
	if (SNT(n)) {
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}
	_getch();
}
bool SHT(int n)
{
	int sum = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i * i != n)
				sum = sum + i + n / i;
			else
				sum = sum + i;
		}
	}
	return sum == n && n != 1;
}
void Baitap4()
{
	system("cls");
	int n;
	cout << "Nhap so : ";
	cin >> n;
	if (SHT(n)) {
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}
	_getch();
}

void phanTich(int n) {
	int p = 2;
	while (n > 1) {
		if (n % p == 0) {
			cout << p << " ";
			n /= p;
		}
		else {
			p++;
		}
	}
}
void Baitap5()
{
	system("cls");
	int n;
	cin >> n;
	phanTich(n);
	_getch();
}

int UCLN(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
void Baitap6()
{
	system("cls");
	int a, b;
	cout << " Nhap vao 2 so : " << endl;
	cin >> a >> b;
	cout << "UCLN = " << UCLN(a, b);
	_getch();
}

long long BSCNN(long long a, long long b)
{
	long long s = 1;
	s = (a * b )/UCLN(a, b);
	return s;
}
void Baitap7()
{
  system("cls");
  long long a, b;
  cout << " Nhap 2 so : ";  cin >> a >> b; cout << endl;
  
  cout << " BSCNN = " << BSCNN(a, b);
  _getch();    
}

void toigian(int& a, int& b) {
	int ucln = UCLN(a, b);
	a = a / ucln;
	b = b / ucln;
}

void Baitap8()
{
	system("cls");
	int a, b;
	cin >> a >> b;
	toigian(a, b);
	cout << a << "/" << b;
	_getch();
}

long long C(int k, int n)
{
	if (k == n || k == 0)
	{
		return 1;
	}
	else
	{
		return C(k - 1, n - 1) + C(k, n - 1);
	}
}
void Baitap9()
{
	system("cls");
	int k, n;
	cin >> k >> n;
	cout << C(k, n);
	_getch();
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
void Baitap10()
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

void Baitap11()
{
  system("cls");
  cout<<endl<<"Tinh so hang thu n cua day Fibonaci";
  int n;
  cout<<endl<<"Nhap n = "; cin>>n;
  cout<<"So Fibonaci thu "<<n<<" la :"<<Fibo1(n);
  _getch();  	
}

int inSoDao(int n) {
	int soDao = 0;
	while (n > 0) {
		soDao = soDao * 10 + n % 10;
		n = n / 10;
	}
	return soDao;
}
void Baitap12()
{
	system("cls");
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "So dao nguoc cua " << n << " la : " << inSoDao(n);
	_getch();
}

int intDemSo(long long n) {
	long long dem = 0;
	while (n != 0) {
		dem++;
		n /= 10;
	}
	return dem;
}
void Baitap13()
{
	system("cls");
	long long n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	cout << "So chu so cua " << n << " la : " << intDemSo(n);
	_getch();
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
void Baitap14()
{
	system("cls");
	int n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	if (boolDoixung(n))
		cout << n << " la so doi xung.";
	else
		cout << n << " khong phai la so doi xung.";
	_getch();
}


//Viet xau s ra man hinh tai toa do (x,y) voi mau la color
void Write(char *s,int x,int y, int color)
{
  textcolor(color);
  gotoxy(x,y); cout<<s;
  textcolor(15);
}

void Khung(int x1,int y1,int x2,int y2)
{ int x,y;
  gotoxy(x1,y1); cout<<"É";
  gotoxy(x2,y1); cout<<"»";
  gotoxy(x1,y2); cout<<"È";
  gotoxy(x2,y2); cout<<"¼";
  for(x=x1+1;x<x2;x++)
  {
	gotoxy(x,y1); cout<<"Í";
	gotoxy(x,y2); cout<<"Í";
  }
  for(y=y1+1;y<y2;y++)
  {
	gotoxy(x1,y); cout<<"º";
	gotoxy(x2,y); cout<<"º";
  }
}
/*Tao ra menu tai toa do (x0,y0) voi n dong luu trong bien s
chon: dong menu hien thoi (khac mau voi cac dong khac) */
void Ve_menu(int x0,int y0,int chon,int n,char *s[])
{
  system("cls");
  Khung(x0-2,y0-1,x0+30,y0+n);
  for(int i=0;i<n;i++)
	 if(i==chon) Write(s[i],x0,y0+i,CYAN);
	 else Write(s[i],x0,y0+i,AQUA);
  Write("Phan Van Thinh lop 23SPT Dai hoc su pham Da Nang!",x0-4,y0+n+5,14);
}

int main()
{
  char ch,*st[20]; //Ghi cac dong menu
  system("cls");
  st[0]="So lon nhat trong hai so";
  st[1]="So lon nhat trong ba so";
  st[2]="Chu hoa thanh thuong";
  st[3]="So nguyen to";
  st[4]="So hoan thien";
  st[5]="Phan tich ra thua so nguyen to";
  st[6]="UCLN";
  st[7]="BCNN";
  st[8]="Toi gian";
  st[9]="CKN";
  st[10]="Ackerman";
  st[11]="Fibo";
  st[12]="Dao so";
  st[13]="Dem so";
  st[14]="Doi xung";
  st[15]="<ESC> Ket thuc chuong trinh!";
  int x0=14,y0=14,chon=0,luuchon,sodong=15,ok=FALSE;
  Ve_menu(x0,y0,chon,sodong,st);
  do
  {
  ch=getch(); //Nhan mot phim
  switch (ch)
	{
		case 72: //phim len
			luuchon=chon;
			chon--;
			if(chon<0) chon=sodong-1;
			Write(st[luuchon],x0,y0+luuchon,AQUA);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 80://phim xuong
			luuchon=chon;
			chon++;
			if(chon==sodong) chon=0;
			Write(st[luuchon],x0,y0+luuchon,AQUA);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 13: //phim ENTER
		ok=TRUE; break;
	}
	if (ok==TRUE) //Neu phim ENTER duoc nhan
	{
	  switch (chon)
		{
		 case 0:
			Baitap0();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 1:
			Baitap1();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 2:
			Baitap2();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 3:
			Baitap3();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 4:
			Baitap4();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 5:
			Baitap5();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 6: 
		    Baitap6();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 7: 
		    Baitap7();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 8: 
		    Baitap8();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 9: 
		    Baitap9();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 10: 
		    Baitap10();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 11: 
		    Baitap11();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 12: 
		    Baitap12();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 13: 
		    Baitap13();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		case 14: 
		    Baitap14();
		    Ve_menu(x0,y0,chon,sodong,st);
		    break;
		}
	  ok=FALSE; //tra lai trang thai ENTER chua duoc nhan
	}
  }
  while (ch!=27);//Nhan phim ESC de thoat khoi chuong trinh
}

