#include<bits/stdc++.h>
using namespace std;

//const int inf = 1e9+7;
const int inf = 2147483647;
struct edge{
	int w,v;
};
vector<edge> adj[100005];
queue<int> q;
int dist[100005];
bool vis[100005];
int n,m,s;
void spfa(){
	for(int i = 1; i <= n; i++){
		vis[i] = false;
		dist[i] = inf;
	}

	dist[s] = 0;
	vis[s]=1;
	
	q.push(s);
	while (!q.empty()){
		int u = q.front();
		q.pop();
		vis[u]=0;
		for (int i = 0; i < adj[u].size(); ++i) {
			int v = adj[u][i].v;
			int w = adj[u][i].w;
			if( dist[u] + w< dist[v]){
				dist[v] = dist[u] + w;
				if(vis[v]==0){
					vis[v] = 1;
					q.push(v);
				}
			}
		}
	}
}
int main(){
	scanf("%d%d%d",&n, &m, &s);	
	int u;
	edge vw;
	for(int i=0;i<m;i++){
		scanf("%d%d%d", &u, &vw.v, &vw.w);
		adj[u].push_back(vw);
	}
	spfa();
	for(int i=1;i<=n;i++){
		cout<<dist[i]<<" ";
	}
	return 0;
}
