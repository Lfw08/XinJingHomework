#include <bits/stdc++.h>
using namespace std;
int r,m;
int a[2000][2000];
int dx[]={1, -1, 0, 0};
int dy[]={0,  0, 1,-1};
int c[2000][2000];
int b[2000][2000];
int cnt[100];

void bfs(int xstart,int ystart){
    queue<int> q;
    //存目前位置
    q.push(xstart);
    q.push(ystart);
    //标记起始位置为可到达
    c[xstart][ystart]=1;

    //开始搜索
    while (!q.empty()){
        //取当前
        int xtmp=q.front();
        q.pop();
        int ytmp=q.front();
        q.pop();

        //向4个可能位置搜索：
       for(int i=0;i<4;i++){
            int xx =xtmp+dx[i];
            int yy =ytmp+dy[i];
            if(xx>0 && xx<=r && yy>0 && yy<=r && b[xx][yy]==0 && a[xx][yy]!=a[xtmp][ytmp]){
                b[xx][yy]=1;//标记为已访
                c[xx][yy]=1;//标记为可到达
                q.push(xx);
                q.push(yy);
            }
        }
    }
    return;
}
int main(){
    cin>>r>>m;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            char tmp;
            cin>>tmp;
            a[i][j]=tmp-'0';
        }
    }

    for(int i = 0;i<m;i++){
        int e,d;
        cin>>e>>d;
        bfs(e,d);
        //计数
        for(int h=0;h<r;h++){
            for(int g=0;g<r;g++){
                if(c[h][g]!=0){
                    cnt[i]++;
                }
            }
        }

        //清除以处理下一组
        memset(c,0,sizeof(c));
        memset(b,0,sizeof(b));

    }
    cout<<endl;
    for(int i=0;i<r;i++){
        if(cnt[i]!=0)
            cout<<cnt[i]<<endl;
    }
    return 0;
}