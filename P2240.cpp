#include<bits/stdc++.h>
using namespace std;
struct node{//定义结构体 
    double weight;//重量 
    double v;//价值 
    double p;//性价比 
}a[105];
int n;
double sum,c;
inline bool cmp(node a,node b){
    return a.p >b.p;//性价比从大到小排序 
}
int main(){
    cin>>n>>c;
    for(register int i=1;i<=n;++i){
        cin>>a[i].weight>>a[i].v;
        a[i].p=a[i].v/a[i].weight;//性价比=价格/重量 
    }
    sort(a+1,a+n+1,cmp);//将性价比排序 
    for(register int i=1;i<=n;++i){
        if(c>=a[i].weight){//金币的重量小于或等于背包的承重量
            c-=a[i].weight;
            sum+=a[i].v;//金币的价值 
        }
		else{
            sum+=c*a[i].p;//如果装不下就分割金币 
            break;
        }
    }
    printf("%.2f",sum);
	return 0; 
}
