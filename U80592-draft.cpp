#include <bits/stdc++.h>
using namespace std;

const int MAXN = 510;
const int INF = 1e9+8;

struct Edge {
    int u, v, w;
    Edge(int u = 0, int v = 0, int w = 0) : u(u), v(v), w(w) {}
};

vector<Edge> edge;
int dist[MAXN][MAXN];

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
    for (int i = 1; i <= n; i++) {
        dist[i][i] = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            dist[i][j] = INF;
        }
    }
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge.push_back(Edge(u, v, w));
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
    }
    floyd(n);
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            sum += dist[i][j];
        }
        cout << sum % 998244354 << endl;
    }
    return 0;
}