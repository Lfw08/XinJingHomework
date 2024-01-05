#include <bits/stdc++.h>
using namespace std;
int a[9];//结果
int b[9];//是否能用
int c[30];//和一定
int d[30];//差一定
int cnt=0;

void queen(int k){
    cout<<k;
    //尝试第n行
    if(k>8){
        //输出结果
        for(int i=1;i<=8;i++){
            cout<<i<<","<<a[i]<<" " ;
            cout<<endl;
            cnt++;
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
    //set b to 1
    for(int i=0;i<9;i++){
        b[i+1]=1;
    }
    //set c to 1
    for (int i = 0; i <= 30; ++i) {
        c[i] = 1;
        }
    //set d to 1
    for (int j = 0; j <= 30; ++j) {
        d[j] = 1;
        }
    
    queen(1);
    cout<<endl;
    cout<<cnt;
    return 0;
}