#include <bits/stdc++.h>
using namespace std;
int n;
int board[100][100];

//四个方向
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfs(int x,int y){
    queue<int> q;
    //存起始位置
    q.push(x);
    q.push(y);

    while(!q.empty()){
        int xtmp = q.front();
        q.pop();
        int ytmp = q.front();
        q.pop();

        
        for(int i=0;i<4;i++){
            int xx = xtmp + dx[i];
            int yy = ytmp + dy[i];
            //判断：没有越界，周围均为3
            if(xx>0 && xx<=n && yy>0 && yy<=n && board[xx][yy]==3){
                board[xx][yy]=0;
                q.push(xx);
                q.push(yy);
            }
            
        }

    }
}

int main(){
    cin>>n;

    for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>board[i][j];
		}
	}
    //cout<<endl;//调试用，提交时删掉
	for(int i=0; i<=n+1; i++) {
		for(int j=0; j<=n+1; j++) {
			if(board[i][j]==0)
                board[i][j]=3;
		}
	}
    //从四个角分别搜索一遍
    bfs(1,1);


    for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			//将3替换成2
            if(board[i][j]==3)
                board[i][j]=2;
			if(j < n ){
				cout<<board[i][j]<<" ";
			}
            else{
            	cout<<board[i][j];
            }
		}
		cout<<endl;
	}
}