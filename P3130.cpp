#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define pii pair<int,int>

using namespace std;
typedef long long ll;

const int N=1e5+23;

int r,Q;
ll a[N],sum[4*N],mi[4*N],tag[4*N];

inline void build(int l,int r,int p)
{
    int lc=p<<1,rc=p<<1|1,mid=l+(r-l)/2;
    if(l==r){
        sum[p]=a[l];
        mi[p]=a[l];
        return ;
    }
    build(l,mid,lc);
    build(mid+1,r,rc);
    sum[p]=sum[lc]+sum[rc];
    mi[p]=min(mi[lc],mi[rc]);
}

inline void push_down(int l,int r,int p)
{
    int lc=p<<1,rc=p<<1|1,mid=l+(r-l)/2;
    sum[lc]+=tag[p]*(mid-l+1);
    sum[rc]+=tag[p]*(r-mid);
    mi[lc]+=tag[p],mi[rc]+=tag[p];
    tag[lc]+=tag[p],tag[rc]+=tag[p];
    tag[p]=0;
}

inline void update(int s,int t,int l,int r,int v,int p)
{
    int lc=p<<1,rc=p<<1|1;
    if(s<=l&&r<=t)
    {
        sum[p]+=v*(r-l+1);
        mi[p]+=v,tag[p]+=v;
        return;
    }
    if(tag[p]) push_down(l,r,p);
    int mid=l+(r-l)/2;
    if(l<=mid) update(l,mid,s,t,v,lc);
    if(r>mid) update(s,t,mid+1,r,v,rc);
    sum[p]=sum[lc]+sum[rc];
    mi[p]=min(mi[lc],mi[rc]);
}

inline ll query_min(int s,int t,int l,int r,int p)
{
    int lc=p<<1,rc=p<<1|1;  
    if(s<=l&&r<=t) return mi[p];
    if(tag[p]) push_down(l,r,p);
    int mid=l+(r-l)/2;
    ll ans=1ll<<59;
    if(l<=mid) ans=min(ans,query_min(s,t,l,mid,lc));
    if(r>mid) ans=min(ans,query_min(s,t,mid+1,r,rc));
    return ans;
}

inline ll query_sum(int s,int t,int l,int r,int p)
{
    int lc=p<<1,rc=p<<1|1;  
    if(s<=l&&r<=t) return sum[p];
    if(tag[p]) push_down(l,r,p);
    int mid=l+(r-l)/2;
    ll ans=0;
    if(l<=mid) ans+=min(ans,query_min(s,t,l,mid,lc));
    if(r>mid) ans+=min(ans,query_min(s,t,mid+1,r,rc));
    return ans;
}

int main()
{
    cin>>r>>Q;
    rep(i,1,r)
        cin>>a[i];
    build(1,r,1);
    while(Q--)
    {
        char opt;
        cin>>opt;
        if(opt=='P'){
            int l,r,z;
            cin>>l>>r>>z;
            update(l,r,1,r,z,1);
        }
        if(opt=='M'){
            int l,r;cin>>l>>r;
            cout<<query_min(l,r,1,r,1)<<endl;
        }
        if(opt=='S'){
            int l,r;cin>>l>>r;
            cout<<query_sum(l,r,1,r,1)<<endl;
        }
    }
    return 0;
}