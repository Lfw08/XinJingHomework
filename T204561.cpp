#include<bits/stdc++.h>
using namespace std;
int a[10][10],vis[100],num;
void dfs(int h){
	for(int j=0;j<num;j++)
		if(a[h][j]==1&&vis[j]==0){
		    vis[j]=1;
		    cout<<'-'<<j;
		    dfs(j);
		}
}
int main(){
	num=7;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>a[i][j]; 
        }
    }
    vis[0]=1;
    cout<<0;
    dfs(0);}