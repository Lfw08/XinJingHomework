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
	//Initialization:
	for(int i = 1; i <= n; i++){
	vis[i] = false;
	dist[i] = inf;
	}

	//Starting node is marked as visited
	//Its distance is set to 0
	dist[s] = 0;
	vis[s]=1;
	
	//Enqueue the starting node
	q.push(s);

	//While there are still unvisited nodes in the queue
	while (!q.empty()){
		//Dequeue the node
		int u = q.front();
		q.pop();
		
		//Mark the dequeued node as unvisited
		vis[u]=0;

		//For each neighbor v of the dequeued node u
		for (int i = 0; i < adj[u].size(); ++i) {
			int v = adj[u][i].v;
			int w = adj[u][i].w;
			
			//If distance of v through u is less than its current distance
			if( dist[u] + w< dist[v]){
				
				//Update distance of v to distance of u + weight of edge(u,v)
				dist[v] = dist[u] + w;
				
				//If v is unvisited
				if(vis[v]==0){
					
					//Mark v as visited
					vis[v] = 1;
					
					//Enqueue v
					q.push(v);
				}
			}
		}
	}
}
int main(){
	// Read the number of nodes, edges and starting node (s)
	scanf("%d%d%d",&n, &m, &s);

	// Read the edges, where each edge is represented by a tuple (u, v, w)
	// where u is the starting node, v is the ending node and w is the weight
	// of the edge.
	int u;
	edge vw;
	for(int i=0;i<m;i++){
		scanf("%d%d%d", &u, &vw.v, &vw.w);
		// Add the edge to the adjacency list of node u
		adj[u].push_back(vw);
	}

	// Run the SPFA algorithm to find the shortest distance from the starting
	// node s to all other nodes in the graph
	spfa();

	// Print the shortest distance from the starting node to each node
	for(int i=1;i<=n;i++){
		// Print the shortest distance from s to node i
		cout<<dist[i]<<" ";
	}
	return 0;
}

