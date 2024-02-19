#include<bits/stdc++.h>
using namespace std;

int n,ans1,ans2[10001][11],sum,a[11];

void dfs(int t,int m)
{
    if (t>10) 
    {
        if (m==n)
        {
            ans1++;//统计方案总数 
            for (int i=1;i<=10;i++)
            ans2[ans1][i]=a[i]; 
        }
        return ;
    }
    for (int i=1;i<=3;i++)
    {
        if (m+i>n) break; 
        a[t]=i;
        dfs(t+1,m+i);
        a[t]=0;
    }
}
int main()
{
    cin>>n;
    dfs(1,0);//从第一种调料开始尝试，美味程度为0 
    cout<<ans1<<endl;
    for (int i=1;i<=ans1;i++)
    {
        for (int j=1;j<=10;j++)
            cout<<ans2[i][j]<<" ";
        cout<<endl;
    }//输出
    return 0;
} 
