#include <bits/stdc++.h>
using namespace std;
const int maxn=20005;

int v,n,c,space[maxn],ctmp[maxn]; //space = v, ctmp = weight

int f[maxn];

void dpdfs(){
	for(int i=1;i<=n;i++)
		for(int j=c;j>=ctmp[i];j--)
			f[j]=max(f[j],f[j-ctmp[i]]+space[i]);
}


int main()
{
	cin>>v>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>space[i]>>ctmp[i];
		}
	
	dpdfs();
	
	if(f[c]<v) cout<<"Impossible";
	else{
		int i=c;
		while(f[i]>=v){
			i--;
			} 
			cout<<c-i-1;
	}
	return 0;
}