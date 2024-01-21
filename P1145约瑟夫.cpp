//约瑟夫问题
#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int flag=1;
    while(!q.empty()){
        if(flag!=m){
            int tmp=q.front();
            q.pop();
            q.push(tmp);
            flag++;
        }else{
            flag=1;
            int tmp=q.front();
            cout<<tmp<<" ";
            q.pop();
        }
    }
    return 0;
}