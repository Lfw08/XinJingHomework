#include<bits/stdc++.h>
#define N 1502
using namespace std;
int r,m,dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,1,0,-1,1,0,-1};
int galaxy[N*N],sum,Max;
bool tmp[N][N];
void dfs(int x,int y){//dfs
	sum++;
	tmp[x][y]=false;

	for(int i=0;i<8;i++){//八个方向
		int xx=x+dx[i],yy=y+dy[i];
		if(xx>=1&&xx<=r&&yy>=1&&yy<=m&&tmp[xx][yy])
			dfs(xx,yy);
	}
}
int main(){

	char c;
	cin>>r>>m;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			if(c=='*')tmp[i][j]=true;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=m;j++){
			if(tmp[i][j]){
				dfs(i,j);
				galaxy[sum]++;
				if(sum*galaxy[sum]>Max)Max=sum*galaxy[sum];
				sum=0;
			}
		}
	}
	int ans=0;
    
	for(int i=0;i<=r*m;i++){
		if(galaxy[i])ans++;
	}
	cout<<ans<<' '<<Max;
	return 0;
}