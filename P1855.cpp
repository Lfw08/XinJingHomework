#include<bits/stdc++.h>
#define INF 1145141919
using namespace std;
const int maxn=1000;
int t1[maxn],m1[maxn],f[maxn][maxn];
    int n,m,t;

void dpdfs(){
	for(int i=1;i<=n;i++){
		for(int j=m;j>=m1[i];j--){
			for(int k=t;k>=t1[i];k--){
				f[j][k]=max(f[j][k],f[j-m1[i]][k-t1[i]]+1);
			}
		}
	}
}



int main()
{
    
    cin>>n>>m>>t;
    for(int i=1;i<=n;i++){
    	cin>>m1[i]>>t1[i];
	}
	dpdfs();
	cout<<f[m][t];
	return 0;
}