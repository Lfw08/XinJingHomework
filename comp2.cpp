#include <bits/stdc++.h>
using namespace std;

int t;
int vis[10000];
bool flag[7];
int a[7];
int b[7];


void dfs(int x,int b,int k){
	int xx;
	for(int i=0;i<2;i++){
		if(i==0){
		    xx = 2*x; 
		}
		else if(i == 1){
			xx = 10 * x + 1;
		}
		
		if(vis[xx]==0 && xx > 0 && xx <=10000000){
			vis[xx]=1;
			if(xx = b){
				flag[k] = true;
			}
			dfs(xx,b,k);
		}
	}
}

int main(){
	cin>>t;
	for(int i=0;i<t;i++){
		flag[i]=false;
		cin>>a[i];
		cin>>b[i];
		dfs(a[i],b[i],i);
		
		if(flag[i]){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		flag[i]=false;
	}
	return 0;
}