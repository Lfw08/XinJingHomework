#include<bits/stdc++.h>
using namespace std;
int gh[7][7],visit[7];
const int r=7;
queue<int> q;
void bfs(int x){
	q.push(x);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<r;i++){
			if(gh[x][i]==1&&visit[i]==0){
				visit[i]=1;
				cout<<"-"<<i;
				q.push(i);
			}
		}	
	}
	return;
}
int main(){
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			cin>>gh[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			if(gh[i][j]==1){
				cout<<i;
				bfs(i);
				return 0;
			}
		}
	}
	return 0;
}