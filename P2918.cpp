#include <bits/stdc++.h>
using namespace std;
const int maxans=114514;


int n,m,ans=1e9;
int a[maxans],b[maxans],dp[maxans];

void dpdfs(){
	for(int i=1;i<=n;i++)

    cin>>a[i]>>b[i];
    dpdfs();
    for(int i=m;i<=m+5000;i++)
    ans=min(ans,dp[i]);//寻找哪一个既符合购买量，钱又最少 
    cout<<ans;;//直接输出即可 
}