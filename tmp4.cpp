#include <bits/stdc++.h>
using namespace std;

int n,m,out;
vector<int>gh[110];
int vis[110];

int main(){
    int tmpk,tmpj,w;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int g=1;g<=n;g++){
			cin>>gh[n+1][g+1];
		}
	}
	vis[0]=1;
	for(int j=0;j<n;j++){
		if(vis[j]==1){//找在树里的点
		int w=1000;
		if(vis[j]==1){
			for(int k=0;k<n;k++){
			if(vis[k]==0 && gh[j][k]<=w){
			int tmpj=j;
			int tmpk=k;
			w=gh[j][k];
		}
		}
		}
		 	
		}
		vis[tmpk]=1;
		out += w;
		cout<<tmpj<<"-----"<<tmpk<<endl;
	}
	return 0;
	}
