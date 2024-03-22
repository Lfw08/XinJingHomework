#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<set>
#include<vector>
using namespace std;
const int inf = 1e9+7;
struct edge{
	int w,v;
};
struct node{
	int pos,dis;
	bool operator <(const node &a)const{
		return dis>a.dis;
	}
};
vector<edge> adj[100005];
priority_queue<node> q;
int dist[100005];
bool vis[100005];
int n,m,s;
void djstl(){
	for(int i = 1; i <= n; i++){
		vis[i] = false;
		dist[i] = inf;
	}
	node node_u;
	node_u.pos = s;
	node_u.dis = 0;
	q.push(node_u );
	dist[s] = 0;
	while(!q.empty()){
		node_u = q.top();
		q.pop();
		if(vis[node_u.pos]==true){
			continue;
		}
		vis[node_u.pos]=true;//c处理过是真 
		for(int i = 0; i < adj[node_u.pos].size(); i++){
			int v = adj[node_u.pos][i].v;
			int w = adj[node_u.pos][i].w;
			if(dist[node_u.pos] + w < dist[v]){
				dist[v] = dist[node_u.pos]+w;
				node tmp;
				tmp.dis = dist[v];
				tmp.pos = v;
				q.push(tmp);
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
	djstl();
	for(int i=1;i<=n;i++){
		cout<<dist[i]<<" ";
	}
	return 0;
}
