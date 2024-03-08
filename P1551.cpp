#include <bits/stdc++.h>
using namespace std;

int f[114514];

int find(int x){
	if(f[x] == x){
		return x;
	}else{
		f[x]= find(f[x]);
		return f[x];
	}
	
}



int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int i,a,b;
	for(int i=0;i<=n;i++){
		f[i]=i;
	}
	for(int i=0;i<m;i++){
		cin>>a>>b;
		f[find(a)]=find(b);
	}
	while(p--){
		int x,y;
		cin>>x>>y;
		if(find(x)==find(y)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	
}