#include<bits/stdc++.h>
using namespace std;
int r,e[300],s[300][300],maxans=-1;

void dpfunc(){
    for(int i=2;i<2*r;i++){
        for(int j=i-1;i-j<r&&j>=1;j--){
            //从i开始向前推
            for(int k=j;k<i;k++){//k是项链的左右区间的划分点 
            
            s[j][i]=max(s[j][i],s[j][k]+s[k+1][i]+e[j]*e[k+1]*e[i+1]);
            
            }//max(原来能量，左区间能量+右区间能量+合并后生成能量）  
            if(s[j][i]>maxans){
                maxans=s[j][i];//求最大值 
            }
        }
    } 
}


int main(){
    cin>>r;
    for(int i=1;i<=r;i++){
        
        cin>>e[i];

        e[i+r]=e[i];
        }
    
    
    dpfunc();

    cout<<maxans;
    return 0;
}