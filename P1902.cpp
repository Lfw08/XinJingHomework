#include <bits/stdc++.h>
using namespace std;


const int dx[4]={0, 0, -1, 1};
const int dy[4]={1, -1, 0, 0}; //四个方向 对应上、下、左、右 

const int N = 1000 + 5;
int p[N][N], n, m, ans=0x3f3f3f3f; //答案初始为最大化 
int f[N][N]; //记录走到这个点所受伤害的最小值 
bool v[N][N]; //该点是否访问过了 

struct node {
	int x, y, maxdamage;
};

node s[N*N]; int top; //防爆栈

void dfs() {
	while (top) { 
		int x=s[top].x, y=s[top].y, maxdamage=s[top].maxdamage; 
		top--; v[x][y]=false; //出栈 
		if (maxdamage >= ans) continue; //如果当前受到的伤害大于答案的话，再往下搜伤害也不会变小了，于是果断剪枝 
		if (x == n) { //搜到最后一行则可记录答案 
			ans=maxdamage; //由于上面的剪枝，这里的答案一定是最优解了 
			continue;
		}
		for (int i=0; i<4; i++) {
			int nx=x+dx[i], ny=y+dy[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m) continue; //检查是否越界 
			if (v[nx][ny]) continue; //检查是否访问过了 
			int nextdamage=max(maxdamage, p[nx][ny]); //求到下一个点后受到的伤害 
			if (f[nx][ny] <= nextdamage) continue;
			//如果到下一个点受到的伤害大于我记录过的所受伤害的最小值，可以直接跳过
			//因为我一定有另一条更优的路径到达下一个点 
			v[nx][ny]=true;  
			f[nx][ny]=nextdamage; //记录 
			s[++top]=(node){nx, ny, nextdamage}; //进栈 
		}
	}
}

int main() {
	memset(f, 0x3f, sizeof(f)); //初始化 
	cin>>n>>m;
    
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++) cin>>p[i][j];
	for (int i=1; i<=m; i++) { //以第二行每一个点作为起点开始搜索
		v[2][i]=true;
		s[++top]=(node){2, i, p[2][i]};  
		dfs();
	}
	printf("%d\n", ans);
	return 0;
}