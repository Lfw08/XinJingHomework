#include <bits/stdc++.h>
using namespace std;
const int maxans=20005;

int v,r,c,space[maxans],ctmp[maxans]; //space = v, ctmp = weight

int f[maxans];

void dpdfs(){
	for(int i=1;i<=r;i++)
		for(int j=c;j>=ctmp[i];j--)
			f[j]=max(f[j],f[j-ctmp[i]]+space[i]);
}


int main()
{
	cin>>v>>r>>c;
	for(int i=1;i<=r;i++){
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