#include <bits/stdc++.h>
using namespace std;
const int max1=1e9+5;
const int max2=2e5;

int r,m;
int a[max2];
int b[max2];

struct man{
    int x,y,num;
};
man f[max2];

bool cmp(man c, man d){
    //compare with num
    return c.num > d.num;
}

int find(int x){
    if(a[x] == x){
        return x;
    }
    a[x]=find(a[x]);
    return a[x];   
}

void merge(int x, int y){
    int tmp1 = find(x);
    int tmp2 = find(y);
    a[tmp1] = tmp2;
}

bool check(int x,int y){
    int tmp1 = find(x);
    int tmp2 = find(y);
    if(tmp1 == tmp2){
        return true;
    }else{
        return false;
    }
}

int main(){
    cin>>r>>m;
    for(int i = 1; i<=r; i++){//init
        a[i] = i;
    }
    for(int i = 1; i<=m; i++){
        cin>>f[i].x>>f[i].y>>f[i].num;
    }
    //输入
    //排序
    sort(f+1,f+m+1,cmp);
    for(int i = 1; i<=m+1; i++){
        if(check(f[i].x,f[i].y)){
            cout<<f[i].num<<endl;
            break;
        }
        else{
            if(!b[f[i].x]){
                b[f[i].x] = f[i].y;
            }
            else{
                merge(b[f[i].x],f[i].y);
            }

            if(!b[f[i].y]){
                b[f[i].y] = f[i].x;
            }
            else{
                merge(b[f[i].y],f[i].x);
            }
        }
    }
return 0;
}







