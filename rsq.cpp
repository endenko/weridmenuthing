#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 100002
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
void update(int id,int l,int r,int p){
    if(p<l || p>r){
        return ;
    }
    if(l==r){
        ma[id]=a[p];
        return ;
    }
    int mid=(l+r)/2;
    update(id*2,l,mid,p);
    update(id*2+1,mid+1,r,p);
    ma[id]=ma[id*2]+ma[id*2+1];
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
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    build(1,1,n);
    while(q--){
        int t,u,v;
        cin>>t>>u>>v;
        if(t==1){
           a[u]=v;
           update(1,1,n,u);
        }else{
            cout<<get(1,1,n,u,v)<<endl;
        }
    }
}
