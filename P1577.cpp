#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll l,r,mid,n;

ll k,ans;
ll a[10086114];

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
        double x;
        cin>>x;
        a[i] = x * 100;
    }

    while(l<=r){
        mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    
    printf("%.2lf",ans * 1.0 / 100);
    return 0;
    
}