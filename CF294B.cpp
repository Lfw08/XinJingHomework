#include <bits/stdc++.h>
using namespace std;
const int maxans = 114514;
int dp[maxans],v[maxans],w[maxans];
int n,sum;//sum为总厚度


void dpfunc(){
	for( int i=1; i<=n; i++ ) //第 i 本书
		for( int j=sum; j>=v[i]; j-- ) 
			dp[j] = min( dp[j], dp[ j-v[i] ]+w[i] );
			}

int main(){
	cin>>n;
	for( int i=1; i<=n; i++ ){
		cin>>v[i]>>w[i];
		sum += v[i]; 
	}
	//initialize to max
	for( int i=1; i<=sum; i++ )
		dp[i] = 114514;
		
	dpfunc();
	
	//从大到小遍历，查找可以满足要求的
	for(int i = sum; i >= 0;i--){
		if(sum-i >= dp[i]){ //下层大于上层就行
			cout<<sum-i;
			break;//一个就得了
		}
	}
	
	return 0;
}
