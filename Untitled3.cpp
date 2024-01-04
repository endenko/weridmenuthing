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
#define YELLOW 14

void Baitap1()
{
  system("cls");
  cout << endl << "Tim so lon nhat hai so thuc x, y";
  float x, y;
  cout << "Nhap x: ";
  cin >> x;
  cout << "Nhap y: ";
  cin >> y;

  float max = x > y ? x : y;

  cout << "So lon nhat la: " << max << endl;
  getch();    
}

void Baitap2()
{
  system("cls");
  cout << endl << "Tim so lon nhat cua 3 so thuc a, b, c";
  float a, b, c;
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;
  cout << "Nhap c: ";
  cin >> c;

  float max = a; // Kh?i t?o max b?ng a
  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  cout << "So lon nhat la: " << max << endl;
  getch();
}

void Baitap3()
{
  system("cls");
  cout << endl << "Doi chu cai hoa c thanh chu thuong";
  char c;

  cout << "Nhap c: ";
  cin >> c;

  if (c >= 'A' && c <= 'Z') {
    c = c + 'a' - 'A';
  }

  cout << "Chu thuong tuong ung la: " << c << endl;
  getch();
}

bool IsPrime(int n)
{
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void Baitap4()
{
  system("cls");
  cout << endl << "Kiem tra so nguyen duong n co phai la so nguyen to";
  int n;

  cout << "Nhap n: ";
  cin >> n;

  bool isPrime = IsPrime(n);

  cout << (isPrime ? "La so nguyen to" : "Khong phai la so nguyen to") << endl;
  getch();
}

bool IsPerfect(int n)
{
  int sum = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;
      if (sum > n) {
        return false;
      }
    }
  }
  return sum == n;
}

void Baitap5()
{
  system("cls");
  cout << endl << "Kiem tra so nguyen duong n co phai la so hoan thien";
  int n;

  cout << "Nhap n: ";
  cin >> n;

  bool isPerfect = IsPerfect(n);

  cout << (isPerfect ? "La so hoan thien" : "Khong phai la so hoan thien") << endl;
  getch();
}

void PrimeFactors(int n)
{
  if (n <= 1) {
    return;
  }

  cout << "Cac thua so nguyen to cua " << n << " la: ";
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      cout << i << " ";
      n /= i;
    }
  }
  cout << endl;
}

void Baitap6()
{
  system("cls");
  cout << endl << "Phan tich so nguyen duong n ra thua so nguyen to";
  int n;

  cout << "Nhap n: ";
  cin >> n;

  PrimeFactors(n);
  getch();
}

int GCD(int a, int b)
{
  while (a != b) {
    if (a > b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return a;
}

void Baitap7()
{
  system("cls");
  cout << endl << "Tim UCLN cua hai so nguyen a va b";
  int a, b;

  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  int gcd = GCD(a, b);

  cout << "UCLN cua " << a << " va " << b << " la: " << gcd << endl;
  getch();
}

int LCM(int a, int b)
{
  return (a * b) / GCD(a, b);
}

void Baitap8()
{
  system("cls");
  cout << endl << "Tim BCNN cua hai so nguyen a va b";
  int a, b;

  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  int lcm = LCM(a, b);

  cout << "BCNN cua " << a << " va " << b << " la: " << lcm << endl;
  getch();
}

void SimplifyFraction(int a, int b, int &numerator, int &denominator)
{
  int gcd = GCD(a, b);
  numerator = a / gcd;
  denominator = b / gcd;
}

void Baitap9()
{
  system("cls");
  cout << endl << "Rut gon phan so";
  int a, b, numerator, denominator;

  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  SimplifyFraction(a, b, numerator, denominator);

  cout << "Phan so sau khi rut gon la: " << numerator << "/" << denominator << endl;
  getch();
}
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

void Baitap10()
{
  // Thêm m? cho Baitap10 ? ðây
}

int main()
{
  char ch;
  char *st[20]; // Lýu các d?ng menu
  int x0=5, y0=5, chon=0, luuchon, sodong=10, ok=FALSE;

  st[0] = "Tim so lon nhat 2 so";
  st[1] = "Tim so lon nhat 3 so";
  st[2] = "Doi chu cai hoa thanh chu thuong";
  st[3] = "Kiem tra so nguyen duong n co phai so nguyen to";
  st[4] = "Kiem tra so nguyen duong n co phai so hoan thien";
  st[5] = "Phan tich so nguyen n ra thua so nguyen to";
  st[6] = "Tim UCLN cua hai so nguyen a va b";
  st[7] = "Tim BCNN cua hai so nguyen a va b";
  st[8] = "Rut gon phan so";
  st[9] = "Ket thuc chuong trinh";

  do
  {
    system("cls");
    Khung(x0-2, y0-1, x0+30, y0+sodong);
    for (int i = 0; i < sodong; i++)
    {
      if (i == chon)
        Write(st[i], x0, y0+i, CYAN);
      else
        Write(st[i], x0, y0+i, YELLOW);
    }
    Write("Copyright (c) 2016 by Pham Anh Phuong.", x0-4, y0+sodong+5, 10);

    ch = getch(); // Nhan mot phim
    switch (ch)
    {
      case 72: // phim len
        luuchon = chon;
        chon--;
        if (chon < 0) chon = sodong-1;
        break;
      case 80: // phim xuong
        luuchon = chon;
        chon++;
        if (chon == sodong) chon = 0;
        break;
      case 13: // phim ENTER
        ok = TRUE;
        break;
    }

    if (ok == TRUE) // Neu phim ENTER duoc nhan
    {
      switch (chon)
      {
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
          exit(0);
          break;
      }
      ok = FALSE; // Tra lai trang thai ENTER chua duoc nhan
    }
  } while (ch != 27); // Nhan phim ESC de thoat khoi chuong trinh

  return 0;
}
