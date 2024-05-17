#include <bits/stdc++.h>
using namespace std;

int m,V,weight[10086],value[10086],num[10086];
int f[10086];

void dp(){
    for(int i = 1 ; i <= m ; i++){
        if(num[i]*weight[i] > V){//总重大于容量
            // 此处即为完全背包（内层）
            for(int j = weight[i] ; j <= V ; j++){
                f[j] = max(f[j], f[j-weight[i]] + value[i]);
            }
            }else{//总重小于容量
                int a = 1;
                while (num[i]>a){
                    num[i] -= a;
                    //此处即为01内层
                    for(int j = V; j >= a*weight[i] ; j-- ){
                        f[j] = max(f[j], f[j - a*weight[i]] + a * value[i]);
                        a=2*a;
                    }
                }
                //多一件物品
                for(int j = V; j  >= num[i]*weight[i]; j--){
                    f[j]= max(f[j],f[j-num[i]* weight[i]] + num[i]* value[i]);
                }
            }

        }
    }

int main(){
    cin>>m>>V;
    for(int i = 1;i <= m; i++){
        cin>>value[i]>>weight[i]>>num[i];
    }
    
    dp();

    cout<<f[V];
return 0;
}