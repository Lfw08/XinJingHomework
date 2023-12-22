#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    void f(int k);
    cin>>n;
    
    f(1);

return 0;
}
void f(int k){
    int b[n+1];
    bool a[n+1];
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