#include <bits/stdc++.h>
using namespace std;
//输入
int n,m;
char sky[1005][1005];
char tmp[1005];

//存储某一个点属于几号星座
int cons[1005][1005];
//存储具有某数量星星的星座（即星系）中星座数
int galaxy[1005];
int temp=0;

//八个方向
int dx[] = {0,  0, 1,-1,  1,  1, -1, -1};
int dy[] = {1, -1, 0, 0,  1, -1,  1, -1};

void dfs(int x,int y){
    //填充
    for(int i=0;i<8;i++){
        int xx = x +dx[i];
        int yy = y +dy[i];

        //没越界，且没有标记
        if(xx >= 1 && xx<=m && yy>=1 && yy<=n && cons[xx][yy]==0){
            cons[xx][yy] = cons[x][y];
            dfs(xx,yy);
        }
    }
    
}

int main(){
    cin>>n>>m;

    //输入sky
    for(int i=1;i<=n;i++){
        cin>>tmp;
        strcpy(sky[i],tmp);
    }
    
    //
    
    return 0;
}