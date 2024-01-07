#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0,ans=0;
    cin>>n;
    cin>>m;
    // 输入
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //遍历，判断是不是超出最大
    for(int i=0;i<n;i++)
    {
        if(a[i]+sum>m)
        {
            sum=0;
            ans++;
        }
        sum=sum+a[i];
    }
    if(sum)
    {
        ans++;
    }
    // 输出

    cout<<ans;
    return 0;
}