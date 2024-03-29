// SPFA
#include <bits/stdc++.h>
using namespace std;

#define rd m
#define nd n

int m;
int n;//节点数，道路数

const int inf = 1e5+5;
struct edge{
    int weight,end_p;
    //end point and weight of edge
};

vector<edge>adj[100005];
queue<int>q;

int dist[1000005];
//current distance
bool vis[1000005];
//if visited

int p1,p2,start;//输入使用的起始点、终点、源点
int start = 1;
void spfa(){
    //初始化：所有边皆没有访问，路程最小是正无穷
    for(int i = 1; i <= rd; i++){
		vis[i] = false;
		dist[i] = inf;
	}

    dist[start]=0;//到达源点距离是0
    vis[start]=1;//标记源点已经遍历过

    q.push(start);
    while (!q.empty()){//只要还有可以处理的
        //取出队列头
        int u = q.front();
		q.pop();
        //先认为该点没被访问过
		vis[u]=0;
        //对于每与该点相连的每一条边：
		for (int i = 0; i < adj[u].size(); ++i) {
			int v = adj[u][i].end_p;
			int w = adj[u][i].weight;
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



