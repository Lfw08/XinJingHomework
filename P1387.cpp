#include<bits/stdc++.h>
using namespace std;

int a[105][105];

int n,m,ans,xx,yy,maxans;

int dfs(int x,int y){
    for(int i=xx;i<=x;i++)//检测正方形的左边 
        if(!a[i][y])
            return 0;
    for(int j=yy;j<=y;j++)//检测正方形的下面 
        if(!a[x][j])
            return 0;
    ans++;
    dfs(x+1,y+1);
    return ans;//若反回此处则返回ans 
}
int main(){
    
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) 
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]){
                xx=i; 
                yy=j;
                ans=0;
                maxans=max(maxans,dfs(i,j));//求出dfs（i，j)的最大值 
            }
    cout<<maxans;
    return 0;
}