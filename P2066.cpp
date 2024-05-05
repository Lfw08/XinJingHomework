#include<bits/stdc++.h>
using namespace std;
int f[11][16],graph[11][16],path[11][16][11],n,m;
int main()
{
    // 输入公司数量和机器数量
    cin>>n>>m;
    // 输入每个公司的每台机器的价值
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>graph[i][j];
    }
    // 初始化f数组为0
    memset(f,0,sizeof(f));
    // 动态规划求解最大价值
    for(int i=1;i<=n;i++)
        for(int j=0;j<=m;j++)    
            for(int k=0;k<=j;k++)
            {
                // 如果当前状态的最大价值小于前一个状态的最大价值加上当前公司给的机器的价值
                if (f[i][j]<f[i-1][k]+graph[i][j-k])
                {
                    // 更新当前状态的最大价值
                    f[i][j]=f[i-1][k]+graph[i][j-k];
                    // 更新路径
                    for(int h=1;h<i;h++) path[i][j][h]=path[i-1][k][h];
                    // 更新第i家公司给的机器数量
                    path[i][j][i]=j-k;
                }
            }
    // 输出最大价值
    cout<<f[n][m]<<endl;
    // 输出每个公司的给的机器数量
    for(int i=1;i<=n;i++) cout<<i<<" "<<path[n][m][i]<<endl;
    return 0;
}
