#include <bits/stdc++.h>
using namespace std;
const int maxn=114514;


int n,m,ans=1e9;
int a[maxn],b[maxn],dp[maxn];

void dpdfs(){
	for(int i=1;i<=n;i++)
        for(int j=a[i];j<=m;j++)
        dp[j]=min(dp[j],dp[j-a[i]]+b[i]);
}


int main()
{
    cin>>n>>m;
    for(int i=1;i<=m+5000;i++)
    dp[i]=114514;
    for(int i=1;i<=n;i++)
    cin>>a[i]>>b[i];
    dpdfs();
    for(int i=m;i<=m+5000;i++)
    ans=min(ans,dp[i]);//寻找哪一个既符合购买量，钱又最少 
    cout<<ans;;//直接输出即可 
}