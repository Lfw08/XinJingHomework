#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int r, V, weight[100005], value[100005],num[100005]; 
int dp[100005];
int main(){	
    cin>>r>>V;
    for(int i=1; i<=r; i++)
        cin>>value[i]>>weight[i]>>num[i];
    for(int i=1; i<=r; i++){    	
        if(num[i]*weight[i] > V){
		 	for(int j = weight[i]; j <= V; j++)//wanquan
            	dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }else{            
            int a = 1;
            while(num[i] > a){
                num[i] -= a;//num[i]��ʣ�����������ԭʼ������ 
                //תΪ01������ƫƫ���˵��Ϊ��ʡʱ��
				for(int j = V; j >= a * weight[i]; j--)				
                    dp[j] = max(dp[j], dp[j - a * weight[i]] + a * value[i]);
                a *= 2;
            }
            //�Ͼ����������������Ի���������ʣ�࣬���Ե���һ�� 
            for(int j = V; j >= num[i] * weight[i]; --j)
                dp[j] = max(dp[j], dp[j - num[i] * weight[i]] + num[i] * value[i]);
        }
    }    
    printf("%d\n", dp[V]);
    return 0;
}
/*V���������n���ܹ�������Ʒ 
���� ��ֵ ����*/ 
