#include<bits/stdc++.h>
using namespace std;
int b[4]={0};
bool a[4]={true};
void f(int k){
    
    if(k>3)
        for(int i=0;i<3;i++){
            cout<<b[i]<<" ";
        }
    else{
        for(int i=1;i<=3;i++){
            if(a[i]){
                a[i]=false;
                b[k]=i;
                f(k+1);
                a[i]=1;
                b[k]=0;
        }}
    }
}
int main(){
    void f(int k);
    f(1);
return 0;
}