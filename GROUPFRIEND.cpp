#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> adj[300005];
bool visited[300005];
bool sinhvien(int start, int target) {
    fill(visited, visited + 300005, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (v == target) return true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
    return false;
}
int main() {
    int n,m,q,x,y;
    cin >>n>>m>>q;
    for (int i=0;i<m;i++) {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i < q; i++) {
        cin>>x>>y;
        cout<<(sinhvien(x, y)?"YES":"NO")<<endl;
    }
}

