#include <bits/stdc++.h>
using namespace std;
char a[100][100];
int m,r;
int cnt;
void zousifang(int x,int y){
    a[x][y]='.';//Mark done
    int dx,dy;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            dx=x+i;
            dy=y+j;
            if(dx>=0&&dx<=r&&dy>=0&&dy<m&&a[dx][dy]=='W'){//keep searching on the next point
                zousifang(dx,dy);
            }
        }
    }
    return;
} 
int main(){
    cin>>r>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=r;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='W'){
                zousifang(i,j);
                cnt++;
            }
        }
    }
    cout<<endl<<cnt-2;
    return 0;
}