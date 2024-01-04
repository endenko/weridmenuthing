#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

struct Sinhvien {
    char Hoten[40];
    float DTB;
};

void Nhap(int &n, Sinhvien a[]) {
    cout << "Nhap n=";
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the buffer
    for (int i = 0; i < n; i++) {
        cout << endl << "Ho ten: ";
        cin.getline(a[i].Hoten, 40);
        cout << "Diem trung binh: ";
        cin >> a[i].DTB;
        cin.ignore(); // Ignore the newline character left in the buffer
    }
}

void Xem(int n, Sinhvien a[]) {
    cout << endl << "Danh sach sinh vien:";
    for (int i = 0; i < n; i++) {
        cout << endl << (i + 1) << ". " << a[i].Hoten << ", " << a[i].DTB;
    }
    cout << endl; // Replacing getch() with endl for portability
}

int ghifile(int n, Sinhvien a[], const char *filename) {
    FILE *f;
    if ((f = fopen(filename, "wb")) == NULL) return 0;
    fwrite(a, sizeof(Sinhvien), n, f);
    fclose(f);
    return 1;
}

int docfile(const char *filename, int &n, Sinhvien a[]) {
    FILE *f;
    if ((f = fopen(filename, "rb")) == NULL) return 0;
    n = fread(a, sizeof(Sinhvien), 50, f);
    fclose(f);
    return 1;
}

void Lietke(int n, Sinhvien a[]) {
    cout << endl << "Cac sinh vien co chua tu 'Van':";
    for (int i = 0; i < n; i++)
        if (strstr(a[i].Hoten, "Van")) cout << "\n" << a[i].Hoten;
}

int main() {
    Sinhvien sv[50];
    int n; 
    Nhap(n, sv);
    Xem(n, sv);
    ghifile(n, sv, "sinhvien.dat");
    
    Sinhvien b[50];
    int m; 
    docfile("sinhvien.dat", m, b);
    Xem(m, b);

    // Assuming Insert is a function you need to define or remove
    // Insert(m, b); 

    ghifile(m, b, "sinhvien.dat");
    
    docfile("sinhvien.dat", m, b);
    
    Xem(m, b);
    return 0;
}

