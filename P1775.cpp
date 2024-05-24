#include<bits/stdc++.h>
using namespace std;
int dp[310][310];
int len,n;
int a[310],sum[310];

void dpfunc(){
    for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=n-len+1;i++)
		{
			int j=i+len-1;
			for(int k=i;k<j;k++)
			{
				dp[i][j]=min(dp[i][j], dp[i][k] + dp[k+1][j] + sum[j] - sum[i-1]) ;
			}
		}
	}
}

int main()
{
	cin>>n;
	memset(dp,1145,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		dp[i][i]=0;
	}

    dpfunc();
	
	cout<<dp[1][n];
}