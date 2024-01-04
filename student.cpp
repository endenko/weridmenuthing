#include <iostream>
#include <string.h>
#include <conio.h>
#include <algorithm>

using namespace std;

struct Sinhvien
{
	char Hoten[40];
	float DTB;	
};
void Nhap(int &n,Sinhvien a[])
{
	cout<<"Nhap n="; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<endl<<"Ho ten:";
		fflush(stdin);
		gets(a[i].Hoten);
		cout<<endl<<"Diem trung binh:";
		cin>>a[i].DTB;		
	}	
}

void Xem(int n,Sinhvien a[])
{
	cout<<endl<<"Danh sach sinh vien:";
	for(int i=1;i<=n;i++)
	{
		cout<<endl<<i<<". "<<a[i].Hoten<<", "<<a[i].DTB;
	}
	getch();
}

int ghifile(int n,Sinhvien a[],char *filename)
{
	FILE *f;
	if ((f=fopen(filename,"wb"))==NULL) return 0;
	fwrite(a,sizeof(Sinhvien),n,f);
	fclose(f);	
} 

int docfile(char *filename,int &n,Sinhvien a[])
{
	FILE *f;
	if((f=fopen(filename,"rb"))==NULL) return 0;
	n=fread(a,sizeof(Sinhvien),50,f);
	fclose(f); 
}
bool sosanh(Sinhvien a,Sinhvien b)
{
	return a.DTB>b.DTB;	
}

void Lietke(int n,Sinhvien a[])
{
	cout<<endl<<"Cac sinh vien co chua tu 'Van':";
	for(int i=1;i<=n;i++)
	if(strstr(a[i].Hoten,"Van")) cout<<"\n"<<a[i].Hoten;
}

main()
{
	Sinhvien sv[50];
	int n; 
	Nhap(n,sv);
	Xem(n,sv);
	ghifile(n,sv,"sinhvien.dat");
	
	Sinhvien b[50];
	int m; 
	docfile("sinhvien.dat",m,b);
	Xem(m,b);
	
	Insert(m,b); 
	
	ghifile(m,b,"sinhvien.dat");
	
	docfile("sinhvien.dat",m,b);
	
	Xem(m,b); 
}

