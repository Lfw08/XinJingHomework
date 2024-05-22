#include <iostream>
using namespace std;
const int N = 3;
const int C = 5;
int w[N + 1] = {0,3,2,2};
int v[N + 1] = {0,5,10,20};
int f[N + 1][C + 1] ;
int Completeknapsack(){	//递推
	for(int i=1;i<=N;i++){     
	    for(int j=0;j<=C;j++){//为什么不能j+=w[i]?         
		    for(int k=0;k*w[i]<=j;k++){              
			   f[i][j]=max(f[i][j],f[i-1][j-k*w[i]]+k*v[i]);             
			   }         
		}    
	}     
	return f[N][C];
}
int main(){
	cout<<Completeknapsack()<<endl;
	return 0;
}

/*int dp[MAX_N+1][MAX_W+1];  
void solve(){     
	
	printf("%d\n",); 
}

void solve(){
     for(int i=1;i<=n;i++){
	    for(int j=0;j<=W;j++){
			if(j<w[i]){
				dp[i+1][j]=dp[i][j];
			}else{                   
			    dp[i][j]=max(dp[i-1][j],dp[i][j-w[i]]+v[i]); 
            }             
		}         
	}     
    printf("%d\n",dp[n][W]); 
}*/
