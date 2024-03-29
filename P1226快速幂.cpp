#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fspow(ll a, ll b,ll p) {
  ll result = 1;
  while (b > 0) {
    if (b & 1) result = result * a % p;
    a = a * a;
    b >>= 1;
  }
  return result;
}

int main(){
    ll a;
    ll b;
    ll p;
    cin>>a>>b>>p;
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<fspow(a,b,p)<<endl;
    return 0;
}