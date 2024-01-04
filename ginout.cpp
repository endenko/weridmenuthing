#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 100000; 
int n, m;
vector<int> graph[MAX]; 
int inTime[MAX];
int outTime[MAX];

void bfs(int s) {
  queue<int> q;
  q.push(s); 
  inTime[s] = 1; // th?i gian b?t ð?u t?i ði?m 1 là 1

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    
    for (int v : graph[u]) {
      if (inTime[v] == -1) { // chýa ði qua ði?m này
        q.push(v);
        inTime[v] = inTime[u] + 1; 
      }
    }
    
    outTime[u] = inTime[u] + 1; // th?i gian ra 
  }
}

int main() {

  cin >> n >> m;

  // kh?i t?o ð? th?
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
  }
  
  // ðánh d?u chýa có th?i gian vào ra
  for (int i = 1; i <= n; i++) {
    inTime[i] = -1;
  }

  bfs(1); // b?t ð?u t? ði?m 1

  // in k?t qu?
  for (int i = 1; i <= n; i++) {
    cout << inTime[i] << " " << outTime[i] << endl; 
  }

  return 0;
}
