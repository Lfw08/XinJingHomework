#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n, V, weight[100005], value[100005],num[100005]; 
int dp[100005];
int main(){	
    cin>>n>>V;
    for(int i=1; i<=n; i++)
        cin>>value[i]>>weight[i]>>num[i];
    for(int i=1; i<=n; i++){    	
        if(num[i]*weight[i] > V){
		 	for(int j = weight[i]; j <= V; j++)//wanquan
            	dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }else{            
            int a = 1;
            while(num[i] > a){
                num[i] -= a;//num[i]是剩余个数，不是原始个数了 
                //转为01背包，偏偏造物，说是为了省时间
				for(int j = V; j >= a * weight[i]; j--)				
                    dp[j] = max(dp[j], dp[j - a * weight[i]] + a * value[i]);
                a *= 2;
            }
            //毕竟不是无数件，所以会有造物后的剩余，所以单造一件 
            for(int j = V; j >= num[i] * weight[i]; --j)
                dp[j] = max(dp[j], dp[j - num[i] * weight[i]] + num[i] * value[i]);
        }
    }    
    printf("%d\n", dp[V]);
    return 0;
}
/*V是总体积，n是总共几个物品 
重量 价值 数量*/ 
