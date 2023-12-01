//判断素数（函数版）
// ↑ If this doesn't show, use Visual Studio Code
#include <bits/stdc++.h>
bool a(int a){
    bool b=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=0;
        }
    }
    return b;
}
int main(){
    int x;
    std::cin>>x;
    if(a(x)){
        std::cout<<"Yes";
    }else{
        std::cout<<"No";
    }
    return 0;
}