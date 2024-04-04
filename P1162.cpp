<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int n;
int board[100][100];
int vis[100][100];

//四个方向
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int p,int q){
    int i;
    if (p<0||p>n+1||q<0||q>n+1||board[p][q]!=0) return;//如果搜过头或者已经被搜过了或者本来就是墙的就往回
    board[p][q]=0;//染色
    for (i=1;i<=4;i++) dfs(p+dx[i],q+dy[i]);//向四个方向搜索
}


int main(){
    cin>>n;

    for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>board[i][j];
		}
	}
    //cout<<endl;//调试用，提交时删掉
	
    
    dfs(0,0);
    
    for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {/*从1输出到n，别把辅助外圈一块输出了*/
			//将3替换成2

            cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
=======
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
>>>>>>> a855ddf296cee84feafa7331f6c3e7f258dcf2ea
}