#include <bits/stdc++.h>
using namespace std;

int r,sum;
int yh[1145][1145];
int vis[25];
int ans[25];

void dfs(int k,int current){//k 当前位数 current 目前总和
	//剪枝：若大于总和则不要继续
	if(current > sum){
		return;
	}
	
	if(k>r)//如果已经搜完了n个数，就返回
	{
		if(current==sum)//如果答案跟给定的数相等
		{
			cout<<ans[1];
			for(int i=2;i<=r;i++)
				cout<<" "<<ans[i];//输出
			exit(0);//终止程序
		}
		return;
	}
	for(int j=1;j<=r;j++){
		//判断：没有被尝试过
		if(vis[j]==0){
			vis[j]=1;
			ans[k]=j;
			dfs(k+1,current+j*yh[r][k]);
			vis[j]=0;
			
		}
	}
}

int main(){
	cin>>r>>sum;
	yh[1][1]=1;
	for(int i=2;i<=r;i++)
		for(int j=1;j<=i;j++)
			yh[i][j]=yh[i-1][j]+yh[i-1][j-1];//生成杨辉三角
	dfs(1,0);
	return 0;
}
