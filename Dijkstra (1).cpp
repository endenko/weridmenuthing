#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
#define MAX 50
#define MAXINT 32767

bool Chuaxet[MAX];
int L[MAX]; //nhan
int Truoc[MAX]; //luu dinh dung truoc
int n,a[MAX][MAX];
int s,t; //Tim duong di ngan nhat tu dinh s den dinh t

void DocFile(char *FileName,int &n,int A[MAX][MAX])
{
  FILE *f;
  int x;
  f=fopen(FileName,"rt");
  fscanf(f,"%d",&x);  n=x;
  for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		int xx;
	    fscanf(f,"%d",&xx); A[i][j]=xx;
	}
  fclose(f);
}

void InMaTran(int n,int A[MAX][MAX])
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
	    printf("%8d",A[i][j]);
	cout<<endl;
  }
}

void Dijkstra(int s,int t)
//Tim duong di ngan nhat tu dinh s den dinh t
{
    //Khoi tao nhan
	for(int v=1;v<=n;v++)
	{
     L[v] = MAXINT;
	 Truoc[v]=s;
	 Chuaxet[v] = true;
	}
	Truoc[s] = 0;
	L[s] = 0;
	Chuaxet[s] = false;

	//lap
    int u = s;
    while(Chuaxet[t])
    {
      int minL = MAXINT, u0;
      for(int v=1;v<=n;v++)
      {
       //danh lai nhan cac dinh ke voi u
       if((Chuaxet[v])&&(a[u][v])&&(L[u]+a[u][v]<L[v]))
       {
         L[v] = L[u]+a[u][v];
         Truoc[v] = u;
       }

       //Tim u sao cho L(u) nho nhat
       if((minL>L[v])&&(Chuaxet[v]))
        {
          minL = L[v]; u0 = v;
        }
      }

      //cap nhat lai u
      u = u0;
      Chuaxet[u] = false;
    }
}

void InKetQua()
{
  cout<<endl<<"DUONG DI NGAN NHAT TU "<<s<<" DEN "<<t<<" : ";
  cout<<t<<" <= ";
  int i = Truoc[t];
  while(i!=s)
  {
     cout<<i<<" <= ";
     i = Truoc[i];
  }
  cout<<s;
  cout<<endl<<" Do dai duong di ngan nhat la: "<<L[t];
}

main()
{
    DocFile("dothi2.txt",n,a);
    InMaTran(n,a);
    getch(); cout<<endl;
    cout<<endl<<"Nhap dinh dau: "; cin>>s;
    cout<<endl<<"Nhap dinh cuoi: "; cin>>t;
    Dijkstra(s,t);
    InKetQua();
}
