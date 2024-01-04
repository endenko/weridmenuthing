#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <queue>

using namespace std;

#define MAX 20

int Chuaxet[MAX];

void DocFile(char *FileName,int &n,int A[MAX][MAX])
{
  ifstream f (FileName);
  f>>n;
  for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	  f>>A[i][j];
  f.close();
}

void InMaTran(int n,int A[MAX][MAX])
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
	    printf("%4d",A[i][j]);
	cout<<endl;
  }
  getch();
}

void Init(int n)
{
    for(int i=1;i<=n;i++) Chuaxet[i]=true;
}

void BFS(int v,int n,int A[MAX][MAX])
{
  queue<int> Q;
  if(Chuaxet[v])
  {
	 Q.push(v);
	 Chuaxet[v]=false; // v dã xét
  }
  while(!Q.empty())
  {
      int p = Q.front();
      Q.pop();
	  cout<<p<<"  ";
      for(int u=1;u<=n;u++)
		if((Chuaxet[u])&&(A[u][p]))
        {
          Q.push(u);
	      Chuaxet[u]=false; // u dã xét
        }
  }
}

main()
{
    int n,a[MAX][MAX];
    DocFile("dothi1.txt",n,a);
    InMaTran(n,a);
    cout<<endl<<"Duyet rong:"<<endl;
    Init(n);
    BFS(5,n,a);
}
