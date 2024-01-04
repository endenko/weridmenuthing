#include <bits/stdc++.h>
#include <conio.h>
#include <stdio.h>
#include <string.h> 
using namespace std;

struct Sinhvien
{
	float diem; 
	string Hoten; 
};

void Nhap(int &n,Sinhvien a[])
{
	cout<<"nhap n = ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"diem so "<<i<<" : ";
		cin>>a[i].diem;
		cout<<"Ho ten : ";
		fflush(stdin);
		getline (cin,a[i].Hoten); 
	 } 
}

void Xem(int n,Sinhvien a[]) 
{ 
	for(int i=1;i<=n;i++)
	cout<<endl<<i<<"."<<a[i].diem<<" "<<a[i].Hoten;
	getch(); 
}
void Sort(int n,Sinhvien a[]) {
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
        	if(a[i].diem>=a[j].diem){
                Sinhvien tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    } 
}
void diemthap(int n,Sinhvien a[])
{
	cout<<endl<<"danh sach nhung nguoi diem thap la : "<<endl; 
 	for (int i = 1; i <=n; i++) {
    	if(a[i].diem<5){
    		cout<<a[i].Hoten<<" "<<a[i].diem<<endl; 
		} 
	}
	getch(); 
}
void Maxdiem(int n, Sinhvien a[]) {
    cout<<endl<<"Diem cao nhat la: "<<endl;
    float max = a[1].diem;
    string tenMax = a[1].Hoten;
    for (int i = 2; i <= n; i++) {
        if (a[i].diem > max) {
            max = a[i].diem;
            tenMax = a[i].Hoten;
        }
    }
    cout<<tenMax<<" - Diem: "<<max<<endl;
    getch(); 
}

void Nguyen(int n, Sinhvien a[]) {
    cout<<"Danh sach nhung nguoi co ho la Nguyen: "<<endl;
    for(int i=1;i<=n;i++) {
        if (a[i].Hoten.find("Nguyen ") == 0 || a[i].Hoten.find("Nguyen ") == 1) {
            cout<<a[i].Hoten<<endl;
        }
    }
    getch(); 
}

int main(){
	int n;
	Sinhvien sv[50];
	Nhap(n,sv);
	cout<<endl<<"danh sach sinh vien : "<<endl; 
	Xem(n,sv);
	Sort(n,sv);
	cout<<endl<<"day so diem tu thap len cao la : "<<endl; 
	Xem(n,sv); 
	diemthap(n,sv);
	Maxdiem(n,sv);
	Nguyen(n,sv); 
} 
