#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int r,m,q;
int a[maxn][maxn];


void bfs(int x,int target){
    //从x开始
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int xtmp = q.front();
        q.pop();

        for(int i = 1;i<=r; i++){

        }


    }
}

int main(){
    cin>>r>>m>>q;

    for(int i=0;i<m;i++){
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        a[tmp1][tmp2]=1;
    }




}