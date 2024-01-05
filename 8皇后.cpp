#include <bits/stdc++.h>
using namespace std;
int a[9];//结果
int b[9]={1};//是否能用
int c[30]={1};//和一定
int d[30]={1};//差一定

void queen(int k){
    cout<<k;
    //尝试第n行
    if(k>8){
        //输出结果
        for(int i=1;i<=8;i++){
            cout<<i<<","<<a[i]<<" " ;
            cout<<endl;
        }
        
    }else{
        for(int i=1;i<=8;i++){//尝试第n列
            if(b[i]==1 && c[k+i+7]==1 && d[k-i+7]==1){
                a[k]=i;
                b[i]=0;
                c[k+i+7]=0;
                d[k-i+7]=0;
                queen(k+1);//尝试下一行
                b[i]=1;
                c[k+i+7]=1;
                d[k-i+7]=1;
            }
        }
    }

}



int main(){
    queen(1);
    return 0;
}