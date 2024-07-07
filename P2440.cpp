#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l,r,mid,ans,k,n,a[114514];

bool check(ll mid){
    ll cnt = 0;
    for(int i = 1;i <=n;i++){
        cnt+=a[i]/mid;

    }
    return cnt>=k;
    

}


int main(){
    l = 1;
    r = 1e8;

    cin>>n>>k;
    for(int i =1; i<=n; i++){
        cin>>a[i];
    }

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