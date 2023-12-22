#include<bits/stdc++.h>
using namespace std;
const int n=3;
int b[4]={0};
bool a[4]={true};
int main(){
    void f(int k);
    f(1);

return 0;
}
void f(int k){
    
    if(k>n)
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
    else{
        for(int i=1;i<=n;i++){
            if(a[i]){
                a[i]=false;
                b[k]=i;
                f(k+1);
                a[i]=1;
                b[k]=0;
        }}
    }
}