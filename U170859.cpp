#include <bits/stdc++.h>
using namespace std;

int n,k;
int qx,qy,kx,ky,tx,ty;

bool flag=0;

int a[10086][10086];//存安全位置

//定义八个方向
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};



void bfs(int x,int y){
    queue<int>q;
    //存起始
    q.push(x);
    q.push(y);
    
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
                    return;
                }
                //不是目标点，继续搜索
                q.push(tmpx);
                q.push(tmpy);
                //标记为已搜索
            }
        }

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
                if(abs(i-j) == abs(qx-qy)){
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
        

        //一次结束，下一组数据
    }

}
