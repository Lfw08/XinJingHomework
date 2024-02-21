#include <bits/stdc++.h>
using namespace std;

int n,k;
int qx,qy,kx,ky,tx,ty;

bool flag=0;

int a[10086][10086];//存安全位置
int b[10086][10086];//存已搜位置

//定义八个方向
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};



void bfs(int x,int y){
    queue<int>q;
    //存起始
    q.push(x);
    q.push(y);
    //记录已搜
    b[x][y]=1;

    //开始遍历
    while(!q.empty()){
        //当前遍历的点
        int xx=q.front();
        q.pop();

        int yy=q.front();
        q.pop();

        //向8个方向搜索
        for(int i=0;i<8;i++){
            int tmpx = xx+dx[i];
            int tmpy = yy+dy[i];

            //判断是否为不能到达的点且没有越界
            if(tmpx>0 && tmpx<=n && tmpy>0 && tmpy<=n && a[tmpx][tmpy]==0){
                //确认是否为目标点
                if(tmpx==tx && tmpy==ty){
                    flag=1;
                    //结束前清空队列
                    while(!q.empty()){
                        q.pop();
                    }
                }
                //不是目标点且并没有搜索过，继续搜索
                if(b[tmpx][tmpy]!=1){
                    q.push(tmpx);
                    q.push(tmpy);}
                //标记为已搜索
                b[tmpx][tmpy]=1;

                //若全部搜索完毕

                
            }
        }

    }
    //结束之前清空队列
    while(!q.empty()){
        q.pop();
    }
    return;
}

int main(){
    cin>>k;//重复几次
    for(int p=0;p<k;p++){
        cin>>n>>qx>>qy>>kx>>ky>>tx>>ty;
        //与q相同的y标记为不可用
        for(int i=1;i<=n;i++){
            a[i][qy] = 1;
        }
        //与q相同的x标记为不可用
        for(int i=1;i<=n;i++){
            a[qx][i] = 1;
        }
        //qx+qy相同标记为不可用
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i+j == qx+qy){
                    a[i][j] = 1;
                }
            }
        }
        //qx、qy之差相同标记为不可用
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i-j+1000 == qx-qy+1000){
                    a[i][j] = 1;
                }
            }
        }
        
        //正片开始
        bfs(kx,ky);

        //输出
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        //清空准备下一组
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j] = 0;
            }
        }
        //清空b
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                b[i][j] = 0;
            }
        }
        //清空flag
        flag = 0;

        //一次结束，下一组数据
    }

}
