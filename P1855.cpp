#include<bits/stdc++.h>
#define INF 1145141919
using namespace std;
const int maxans=1000;
int t1[maxans],m1[maxans],f[maxans][maxans];
    int r,m,t;

void dpdfs(){
	for(int i=1;i<=r;i++){
		for(int j=m;j>=m1[i];j--){
			for(int k=t;k>=t1[i];k--){
				f[j][k]=max(f[j][k],f[j-m1[i]][k-t1[i]]+1);
			}
		}
	}
}



int main()
{
    
    cin>>r>>m>>t;
    for(int i=1;i<=r;i++){
    	cin>>m1[i]>>t1[i];
	}
	dpdfs();
	cout<<f[m][t];
	return 0;
}