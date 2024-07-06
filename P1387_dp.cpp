#include <bits/stdc++.h>
using namespace std;

int min3(int x,int y,int z){
    return min(min(x,y),z);
}

int f[114][114];
int prefix[114][114];
int n,m;
int maxn;

void dp(){
    for(int i = 1; i<=n; i++){
        for(int j =1 ; j<=m; j++){
            if(prefix[i][j] == 1){
                f[i][j] = min3(f[i][j-1],f[i-1][j],f[i-1][j-1])+1;
            }
        }
    }
}

int main(){
    maxn = -1e9;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>prefix[i][j];
        }
    }
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=m;j++){
            dp();
            maxn = max(maxn,f[i][j]);
        }
    }
    cout<<maxn;
    return 0;
}
