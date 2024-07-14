#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
using namespace std;
int r, m;
int board[405][405];
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
void bfs(int startX, int startY) {    
    queue<int> q;
    q.push(startX);
    q.push(startY);     
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        int y = q.front();
        q.pop();
        for (int i = 0; i < 8; ++i) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(xx > 0 && xx <= r && yy > 0 && yy <= m && board[xx][yy] == -1){
            	//�б߽��Ҹõ�δ�߹� 
                board[xx][yy] = board[x][y] + 1;
                q.push(xx);
                q.push(yy);
            }
        }
    }
}

int main() {
    int x, y;
    scanf("%d%d%d%d",&r,&m,&x,&y);
	memset(board, -1, sizeof(board));
	//board�������-1 
	board[x][y] = 0;
    bfs(x, y);
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%-5d",board[i][j]);
            //������ô�������Ϊ����Ҫ�������5 
        }
        printf("\n");
    }
    return 0;
}
