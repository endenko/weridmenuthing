#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,ans[N],cnt;
vector<int>g[N];
bool vis[N],flag;
void dfs(int u,int fa){
    vis[u]=1;
    for(int i=0;i<g[u].size();i++){
        int v=g[u][i];
        if(v==fa)continue;
        if(vis[v]){
            flag=1;
            continue;
        }
        dfs(v,u);
    }
    ans[++cnt]=u;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0);
        }
    }
    if(flag){
        printf("Cyclic\n");
        return 0;
    }
    for(int i=cnt;i>=1;i--){
        printf("%d ",ans[i]);
    }
    return 0;
}

