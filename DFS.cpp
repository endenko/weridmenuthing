#include <iostream>
#include <fstream>
using namespace std;

#define MAX 100

bool Chuaxet[MAX];
int n,a[MAX][MAX];

void DocFile(char *FileName,int &n,int A[MAX][MAX])
{
  ifstream f (FileName);
  f>>n;
  for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	  f>>A[i][j];
  f.close();
}

void InMaTran()
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
	    printf("%4d",a[i][j]);
	cout<<endl;
  }
}

void Init(int n)
{
    for(int i=1;i<=n;i++) Chuaxet[i]=true;
}

void DFS(int v)
{
	if(Chuaxet[v])
	{
     cout<<v<<"  ";
	 Chuaxet[v]=false; // v dã xét
	 for(int u=1;u<=n;u++)
		if((Chuaxet[u])&&(a[u][v])) DFS(u);
	}
}

main()
{
    DocFile("dothi1.txt",n,a);
    InMaTran();
    cout<<endl<<"Duyet theo chieu sau:"<<endl;
    Init(n);
    DFS(3);
}
