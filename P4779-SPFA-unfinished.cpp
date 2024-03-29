#include <bits/stdc++.h>
using namespace std;

const int maxn = 100005; // 定义最大节点数
struct edge {
  int v, w;
};

int n, m, s; 

vector<edge> adj[maxn]; 

int dist[maxn];

bool spfa(int n, int s) { 
  // initialize dist
  memset(dist,INT_MAX,sizeof(dist));
  
  dist[s] = 0; 
  vector<bool> vis(n, false); // 标记节点是否在队列中
  queue<int> q; 
  q.push(s); // 将源节点加入队列
  vis[s] = true; // 标记源节点在队列中
  while (!q.empty()) { // 当队列不为空时
    int u = q.front(); 
    q.pop(); 
    vis[u] = false; 
    for (auto &ed : adj[u]) { 
      int v = ed.v, w = ed.w; 
      if (dist[v] > dist[u] + w) { 
        dist[v] = dist[u] + w; // 更新最短距离
        if (!vis[v]) { 
          q.push(v); 
          vis[v] = true; 
        }
      }
    }
  }
  return true; 
}

int main(){

}
