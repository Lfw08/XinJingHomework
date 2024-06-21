#include <bits/stdc++.h>
using namespace std;
int n,m;


int max3(int x, int y, int z){
    return max(max(x,y),z);
}

int a[55],f[55][500001];

void dp(){
    for(int i = 1; i <=n;i++){
        for(int j = 0; j<=m;j++){
            if(a[i]<j){
                f[i][j] = max3(f[i-1][j], f[i-1][j+a[i]], f[i-1][j-a[i]]+a[i]);
            }else{
                f[i][j] = max3(f[i-1][j], f[i-1][j+a[i]], f[i-1][a[i]-j]+j);

            }
        }
    }
}

int main(){
    cin>>n;
    m = 0;
    for(int i = 1; i <=n; i++){
        cin>>a[i];
        m += a[i];
    }
    memset(f,-0x3f,sizeof(f));
    f[0][0]=0;
    
    dp();

    if(f[n][0]>0){
        cout<<f[n][0];
    }
    else{
        cout<<"-1";
    }

    return 0;
}