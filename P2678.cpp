#include <bits/stdc++.h>
using namespace std;

// 又是二分答案（悲）
typedef long long ll;
ll n,k;
ll a[11451419];
ll l,r,ans,mid;

bool check(ll mid){
    ll m=0;
    ll total=0,i=0,cur=0;
    while (i < n+1){
        i++;
        if(a[i]-a[cur] < mid){
            total++;
        }else{
            cur = i;
        }
    }
    return total > m;
}

int main(){
    ll d;
    l = 1;
    r = 1e5;

    cin>>d>>n>>k;
    for(int i =1; i<=n; i++){
        cin>>a[i];
    }
    a[n+1]=d;
    r = d;

    while(l<=r){
        mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = ++mid;
            mid--;
        }else{
            r = --mid;
            mid++;
        }
    }
    cout<<ans<<endl;
    return 0;
    
}