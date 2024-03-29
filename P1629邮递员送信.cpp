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

int p1,p2,w;//输入使用的起始点、终点、权

void spfa(){
    //初始化：所有边皆没有访问，路程最小是正无穷
    for(int i = 1; i <= rd; i++){
		vis[i] = false;
		dist[i] = inf;
	}

    dist[w]=0;//
    vis[0]=1;

}

