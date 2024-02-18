#include <bits/stdc++.h>
using namespace std;


int main(){
    float sum=0;
    int n;
    cin>>n;
    float tmp;
    for(int i=0;i<n;i++){
        
        cin>>tmp;
        //小于100忽略
        if(tmp<100){
            sum+=0;
        }
        else if(tmp>=100 && tmp<200){
            sum += tmp*0.1;
        }
        else if(tmp>=200 && tmp<500){
            sum += tmp*0.3;
        }
        else if(tmp>=500){
            sum += tmp*0.5;
        }

    }
    //保留两位小数输出
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}