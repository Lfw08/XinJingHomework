#include <bits/stdc++.h>
using namespace std;


long long dp[1100];
long long n,m;
long long win[1100],lose[1100],use[1100];

void dpdfs(){
	for(int i=1;i<=n;i++)
     {
         for(int j=m;j>=use[i];j--)
          dp[j]=max(dp[j]+lose[i],dp[j-use[i]]+win[i]);
         for(int j=use[i]-1;j>=0;j--)
          dp[j]+=lose[i];
     }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
     cin>>lose[i]>>win[i]>>use[i];
     
     dpdfs();
     
     cout<<5 * dp[m];
     return 0;
}