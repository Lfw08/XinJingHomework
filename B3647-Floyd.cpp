#include <bits/stdc++.h>
using namespace std;


const int INF = 1e9+8;

struct Edge {
    int u, v, w;
    Edge(int u = 0, int v = 0, int w = 0) : u(u), v(v), w(w) {}
};

vector<Edge> edges;
int dist[5000][5000];

void floyd(int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    //input
    for (int i = 1; i <= n; i++) {
        dist[i][i] = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            dist[i][j] = INF;
            dist[j][i] = INF;
        }
    }
    
    //store into vector
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
        //use the minimum between the current distance and the weight
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
    }
    floyd(n);

    /*
    //calculate the sum
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            sum += dist[i][j];
            sum = sum % 998244354;
        }
        cout << sum % 998244354 << endl;
    }
    */

   //output the distances
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
   }


    return 0;
}