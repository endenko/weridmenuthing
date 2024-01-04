#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include <set> 
#include <ctime>
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

void Write(char *s, int x, int y, int color) {
    textcolor(color);
    gotoxy(x, y);
    cout << s;
    textcolor(15);
}

void Khung(int x1, int y1, int x2, int y2) {
    int x, y;
    gotoxy(x1, y1);
    cout << "0";
    gotoxy(x2, y1);
    cout << "0";
    gotoxy(x1, y2);
    cout << "0";
    gotoxy(x2, y2);
    cout << "0";
    for (x = x1 + 1; x < x2; x++) {
        gotoxy(x, y1);
        cout << "=";
        gotoxy(x, y2);
        cout << "=";
    }
    for (y = y1 + 1; y < y2; y++) {
        gotoxy(x1, y);
        cout << "|";
        gotoxy(x2, y);
        cout << "|";
    }
}

void Ve_menu(int x0, int y0, int chon, int n, char *s[]) {
    system("cls");
    Khung(x0 - 2, y0 - 1, x0 + 30, y0 + n);
    for (int i = 0; i < n; i++) {
        if (i == chon)
            Write(s[i], x0, y0 + i, RED);
        else
            Write(s[i], x0, y0 + i, CYAN);
    }
    Write("Duong vu minh viet 23spt xin chao cac ban", x0 - 4, y0 + n + 5, 14);
}

void displayWelcomeMessage() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int x = 10;
    int y = 5;
    gotoxy(x, y);
    SetConsoleTextAttribute(hConsole, 11);
    cout << "Chao mung den chuong trinh menu!";
    gotoxy(x, y + 2);
    SetConsoleTextAttribute(hConsole, 11);
    cout << "Nhan phim bat ky de bat dau...";
    _getch();
}

// Khai báo hàm gotoxy, textcolor và các bi?n global t?i ðây

void MenuA() {
   int main() {
int m, A[100], n, B[100], k, C[100];

bool KTra(int x, int n, int A[]) {
    for (int i = 1; i <= n; i++)
        if (x == A[i])
            return true;
    return false;
}

void nhap(char SetName, int &n, int A[]) {
    cout << endl << "so phan tu cua tap hop " << SetName << " : ";
    cin >> n;
    int i = 0, x;
    do {
        cout << endl << "x = ";
        cin >> x;
        if (!KTra(x, i, A)) {
            i++;
            A[i] = x;
        }
    } while (i < n);
}

void Xem(char SetName, int n, int A[]) {
    cout << endl << "Tap hop " << SetName << " : ";
    for (int i = 1; i <= n; i++)
        cout << " " << A[i];
    cout << endl;
}

void Baitap1(char SetName, int &n, int A[]) {
	system("cls");
    cout << "Nhap tap hop " << SetName << ":\n";
    nhap(SetName, n, A);
    Xem(SetName, n, A);
    _getch();
}

bool areSetsEqual(int m, int A[], int n, int B[]) {
    set<int> setA(A, A + m);
    set<int> setB(B, B + n);
    return setA == setB;
}

void Baitap2() {
    system("cls");
	int x;
    cout << "\nNhap phan tu x: ";
    cin >> x;
    if (KTra(x, n, A)) {
        cout << "\nPhan tu " << x << " co trong mang A.\n";
    } else {
        cout << "\nPhan tu " << x << " khong co trong mang A.\n";
    }
    _getch();
}

void Baitap3() {
	system("cls");
    if (areSetsEqual(m, A, n, B)) {
        cout << endl << "Tap A và B giong nhau" << endl;
    } else {
        cout << endl << "Tap A và B khác nhau" << endl;
    }
    _getch();
}

void Giao(char SetA, int m, int A[], char SetB, int n, int B[]) {
    cout << endl << "Giao cua 2 tap hop " << SetA << " va " << SetB << " : ";
    for (int i = 1; i <= m; i++) {
        if (KTra(A[i], n, B))
            cout << A[i] << " ";
    }
    cout << endl;
}

void Baitap4() {
	system("cls");
    Giao('A', m, A, 'B', n, B);
    _getch();
}

void Hop(int m, int A[], int n, int B[]) {
    cout << "hop cua a và b là  : ";
    for (int i = 1; i <= m; i++) {
        if (!KTra(A[i], n, B))
            cout << A[i] << " ";
    }
    for (int j = 1; j <= n; j++) {
        if (!KTra(B[j], m, A))
            cout << B[j] << " ";
    }
    cout << endl;
}

void Baitap5() {
	system("cls");
    Hop(m, A, n, B);
    _getch();
}

void HieuA(int m, int A[], int n, int B[]) {
    cout << "Hieu cua a la : ";
    for (int i = 1; i <= m; i++) {
        if (!KTra(A[i], n, B))
            cout << A[i] << " ";
    }
    cout << endl;
}

void HieuB(int m, int A[], int n, int B[]) {
    cout << "Hieu cua b la : ";
    for (int j = 1; j <= n; j++) {
        if (!KTra(B[j], m, A))
            cout << B[j] << " ";
    }
    cout << endl;
}

void Baitap6() {
	system("cls");
    HieuA(m, A, n, B);
    HieuB(m, A, n, B);
    _getch();
}

void Descartes(int m, int A[], int n, int B[]) {
    cout << "Tich Descartes cua hai tap A va B: {";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << A[i] << ", " << B[j] << ")";
            if (i != m || j != n) {
                cout << ", ";
            }
        }
    }
    cout << "}" << endl;
}

void Baitap7() {
	system("cls");
    Descartes(m, A, n, B);
   	_getch();
}
void minigame(){
	system("cls"); 
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1; 
    int tries = 0;
    int guess;
    cout << "Minigame doan so!"<<endl; 
    cout << "toi se chon 1 so bi mat hay doan"<<endl;
    do {
        cout << "nhap 1 so bat ky : "<<endl; 
        cin >> guess;
        tries++;
        if (guess < secretNumber) {
            cout << "lon hon,hay thu lai!"<<endl;
        } else if (guess > secretNumber) {
            cout << "nho hon,hay thu lai!"<<endl;
        } else {
            cout << "xin chuc mung!!! ban da doan dung sau " << tries << " lan thu!"<<endl;
        }
    } while (guess != secretNumber);
    _getch();
}
	displayWelcomeMessage();
    char ch, *st[10];
    system("cls");
    st[0] = "Viet ham nhap phan tu n";
    st[1] = "Kiem tra x co trong A,B";
    st[2] = "Tap A va B co bang nhau?";
    st[3] = "Giao cua A va B";
    st[4] = "Hop cua A va B";
    st[5] = "Hieu cua A va B";
    st[6] = "Tich Descartes cua A va B";
    st[7] = "Minigame";
    st[8] = "<ESC>ket thuc chuong trinh!";
    st[9] = "Hay bam enter de vao!";
    int x0 = 14, y0 = 14, chon = 0, luuchon, sodong = 9, ok = FALSE;
    while (1) {
        Ve_menu(x0, y0, chon, sodong, st);
        ch = getch();
        switch (ch) {
            case 72:
                luuchon = chon;
                chon--;
                if (chon < 0) chon = sodong - 1;
                Write(st[luuchon], x0, y0 + luuchon, RED);
                Write(st[chon], x0, y0 + chon, CYAN);
                break;
            case 80:
                luuchon = chon;
                chon++;
                if (chon == sodong) chon = 0;
                Write(st[luuchon], x0, y0 + luuchon, RED);
                Write(st[chon], x0, y0 + chon, CYAN);
                break;
            case 13: 
                ok = TRUE;
                break;
        }
        if (ok == TRUE) {
            switch (chon) {
                case 0:
                    Baitap1('A', m, A);
                    Baitap1('B', n, B);
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
					minigame();
					Ve_menu(x0, y0, chon, sodong, st);
					break; 
                case 8:
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
}

void MenuB() {
    // M? c?a Menu B ? ðây
}

int main() {
    char choice;
    bool isRunning = true;

    while (isRunning) {
        cout << "Moi ban chon menu (a hoac b, q de thoat): ";
        cin >> choice;

        switch (choice) {
            case 'a':
                MenuA();
                break;
            case 'b':
                MenuB();
                break;
            case 'q':
                isRunning = false;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    }

    return 0;
}

