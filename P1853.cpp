#include <bits/stdc++.h>
using namespace std;
int w[100000];
int v[100000];
int f[100000];
int s,r,d;

void dpdfs(){
    for(int i=1; i<=r; ++i){
		int m=s/1000;
		for(int j=1; j<=d; ++j){
			for(int k=w[j]/1000; k<=m; ++k){
				if(k>=w[j]/1000) f[k]=max(f[k],f[k-w[j]/1000]+v[j]);
//				printf("%d ",dp[k]);
			}
//			printf("\n");
		}
		s+=f[m];
		memset(f,0,sizeof(f));
	}

}

int main()
{
	cin>>s>>r>>d;
	for(int i=1; i<=d; ++i){
		cin>>w[i]>>v[i];
	}
	dpdfs();
	cout<<s;
}