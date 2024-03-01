#include <bits/stdc++.h>
using namespace std;
int f(114514);

int find(int x){
	if(f[x]==x){
		return x;
	}
	else{
		return f[x]=find(f[x]);
	}
}

struct People{
	int num;
	string name;
};

int main(){
	int n,m,k;
	People s1,s2;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		//初始化
		cin>>s1.name;
		f[s1.num]=s1.num;//我的祖先就是我
	}
	for(int i=1;i<=m;++i){
		//并
		cin>>s1.name>>s2.name;//两位选手
		string x1=find(s1.num),x2=find(s2.num);
		if(x1!=x2) f[x1]=x2;
	}
	cin>>k;
	for(int i=1;i<=k;++i){
		cin>>s1>>s2;
		string x1=find(s1.num),x2=find(s2.num);
		if(x1!=x2){
			cout<<"No."<<endl;
		}else{
			cout<<"Yes."<<endl;
		}
	}
	return 0;
}