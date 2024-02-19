#include <bits/stdc++.h>
using namespace std;

int n,k;
queue<int> q;
int a[200005];
int step[200005];

void bfs(int x){
    
    //存起始
    q.push(x);
    //搜索
    while(!q.empty()){
        for(int i=0;i<=2;i++){
            int xtmp = q.front();
            q.pop();

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
            if(xx>0 && xx<=200000 && step[xx]==0){
                step[xx]=step[xtmp]+1;
                q.push(xx);
            }
        }
    }
    return;
}

int main(){
    cin>>n>>k;

    bfs(n);
    step[n]=0;

    cout<<step[k]<<endl;
    return 0;
}
