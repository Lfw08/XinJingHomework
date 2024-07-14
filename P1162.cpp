#include <bits/stdc++.h>
using namespace std;
int r;
int board[100][100];
int vis[100][100];

//四个方向
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int p,int q){
    int i;
    if (p<0||p>r+1||q<0||q>r+1||board[p][q]!=0) return;//如果搜过头或者已经被搜过了或者本来就是墙的就往回
    board[p][q]=0;//染色
    for (i=1;i<=4;i++) dfs(p+dx[i],q+dy[i]);//向四个方向搜索
}


int main(){
    cin>>r;

    for(int i=1; i<=r; i++) {
		for(int j=1; j<=r; j++) {
			cin>>board[i][j];
		}
	}
    //cout<<endl;//调试用，提交时删掉
	
    
    dfs(0,0);
    
    for(int i=1; i<=r; i++) {
		for(int j=1; j<=r; j++) {/*从1输出到n，别把辅助外圈一块输出了*/
			//将3替换成2

            cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}