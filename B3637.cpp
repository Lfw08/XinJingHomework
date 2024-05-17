#include <bits/stdc++.h>
using namespace std;
int n;
const int MAXN= 114514;

int a[MAXN], d[MAXN];

int dp() {
  d[1] = 1;
  int ans = 1;
  for (int i = 2; i <= n; i++) {
    d[i] = 1;
    for (int j = 1; j < i; j++)
      if (a[j] <= a[i]) {
        d[i] = max(d[i], d[j] + 1);
        ans = max(ans, d[i]);
      }
  }
  return ans;
}

int main(){
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<dp()+1;
}

