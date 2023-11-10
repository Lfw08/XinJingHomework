#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,m;
    char tmp[4];
    cin>>n;
    bool a[n+1];
    cin>>k;
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp=="Yes"){
            a[i]=1;
        }else{a[i]=0;}
    }

    return 0;
}