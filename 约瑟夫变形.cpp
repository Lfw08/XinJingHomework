#include <bits/stdc++.h>
using namespace std;
int tmp;
int main(){
    tmp=1;
    int n,m,i,j=0,k=0;
    bool b[1000];
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++){
        a[i]=0;}
    for(i=1;i<=n;i++){
        b[i]=true;
    }
    
    i=1;
    while(k<n)
    {
        if(b[i]==true)j++;
        if(j==m)
        {
            b[i]=false;
            //从此处开始变形
            a[i]=tmp;
            tmp++;

            k++;
            j=0; 
        }
        i++;
        if(i>n)
        {i=i%n;}
    }
    //输出a
    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}