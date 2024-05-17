#include <bits/stdc++.h>
using namespace std;
int dp[4000][4000],lz[4000][4000];
int main() {
    string s,t;
    cin >> s >> t;
    int x=s.size(),y=t.size();
    s=" "+s;
    t=" "+t;
    for (int i=1; i<=x; ++i) {
        for (int j=1; j<=y; ++j) {
            if (s[i] == t[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                lz[i][j]=3;
            } else {
                if(dp[i - 1][j] < dp[i][j - 1]) {
                    dp[i][j]=dp[i][j - 1];
                    lz[i][j]=2;
                } else {
                    dp[i][j]=dp[i - 1][j];
                    lz[i][j]=1;
                }
            }
        }
    }
    string ans;
    int i=x,j=y;
    while(i>0 &&j>0) {
        if(lz[i][j]==3) {
            ans=s[i]+ans;
            i--;
            j--;
        } else if(lz[i][j]==2) {
            j--;
        } else {
            i--;
        }
    }
    cout << ans;
    return 0;
}