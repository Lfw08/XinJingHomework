#include <bits/stdc++.h>
using namespace std;
int n,m;
int board[1145][1145];
int dx[]={-2,-2,-1,-1,1,1,2,2};
int dy[]={-1,1,-2,2,-2,2,-1,1};

void bfs(int x,int y){
    queue<int> q;
    //先存起始位置（0步）
    q.push(x);
    q.push(y);

    //开始往下
    while (!q.empty()){
        //取出当前
        int xtmp=q.front();
        q.pop();
        int ytmp=q.front();
        q.pop();
        //向8个可能位置搜索
        for(int i=0;i<8;i++){
            int xnew=xtmp+dx[i];
            int ynew=ytmp+dy[i];
            if(xnew>0 && xnew<=n && ynew>0 && ynew<=m && board[xnew][ynew]==-1){//在范围内，且没被遍历过
                board[xnew][ynew]=board[xtmp][ytmp] + 1; //步数加一
                //存新步数
                q.push(xnew);
                q.push(ynew);
            }
        }
    }
    return;
}


int main(){

    int x,y;
    cin>>n>>m>>x>>y;
    memset(board,-1,sizeof(board));//清board
    //将起点设为0步
    board[x][y]=0;
    bfs(x,y);

    //输出
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%-5d",board[i][j]);
        }
        cout<<endl;
    }
    return 0;
}