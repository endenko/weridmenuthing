#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 300002
long long ma[maxn*4];
int a[maxn],n,q;
void build(int id,int l,int r){
    if(l==r){
        ma[id]=a[l];
        return ;
    }
    int mid=(l+r)/2;
    build(2*id,l,mid);
    build(2*id+1,mid+1,r);
    ma[id]=ma[id*2]+ma[2*id+1];
}

long long get(int id,int l,int r,int u,int v){
    if(u>r || v<l){
        return 0;
    }
    if(u<=l && v>=r){
        return ma[id];
    }
    int mid=(l+r)/2;
    return get(2*id,l,mid,u,v)+get(2*id+1,mid+1,r,u,v);
}

int main(){
	int x; 
    cin>>n>>q>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i]; 
    }
    build(1,1,n);
    while(q--){
        int u,v;
        cin>>u>>v;
        long long ans =(v-u+1)*x - get(1,1,n,u,v); 
        cout<<ans<<endl;
    }
}
