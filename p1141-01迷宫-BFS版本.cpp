#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int board[1005][1005];
int color[1005][1005];//每个点的颜色号 
int n, m;
int nextColor;
int colorCount[1000005];//每种颜色可以走的格子数 
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
int bfs(int x, int y) {
    if (color[x][y] != -1) {
	//不为-1，说明这点已经处理过，直接返回颜色的格子数目就行 
        return colorCount[color[x][y]];
    }
    int count = 1;
    queue<int> q;
    color[x][y] = nextColor;
    q.push(x);
    q.push(y);
    while (!q.empty()) {
        x = q.front();
        q.pop();
        y = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (!(xx > 0 && xx <= n && yy > 0 && yy <= n)) {
            	//判边界 
                continue;
            }
            if (color[xx][yy] == -1 && board[xx][yy] != board[x][y]) {
            	// 边界没问题的（上一个if做过）没走过且保证01不一样 
                color[xx][yy] = nextColor;
                count++;
                q.push(xx);
                q.push(yy);
            }
        }
    }
    colorCount[nextColor] = count;
    nextColor++;
    return count;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char c;
            cin >> c;
            board[i][j] = c - '0';
        }
    }
    memset(color, -1, sizeof(color));
    nextColor = 0;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        cout << bfs(x, y)<<endl;
    }
    return 0;
}
