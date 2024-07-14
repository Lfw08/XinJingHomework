#include <bits/stdc++.h>
using namespace std;

int r,k;

long long step[200005];
long long minStep[200005];

void bfs(int x){
    queue<int> q;
    //存起始
    q.push(x);
    step[x] = 0;

    //搜索
    while(!q.empty()){
        int xtmp = q.front();
        q.pop();
        for(int i=0;i<=2;i++){
            int xx;
            //按照三种可能处理x坐标
            if(i == 0){
                xx = xtmp+1;
            }
            else if(i == 1){
                xx = xtmp-1;
            }
            else if(i == 2){
                xx = 2*xtmp;
            }
            
            //判断没有越界
            if(xx>=0 && xx<=200000 &&  step[xx]==0){
                step[xx]=step[xtmp]+1;
                q.push(xx);
            }
        }
    }
    return;
}

int main(){
    cin>>r>>k;

    bfs(r);
    step[r]=0;

    cout<<step[k]<<endl;
    return 0;
}