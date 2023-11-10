#include <bits/stdc++.h>
using namespace std;
int cnt[11];
int a[7];
int main(){
    
    //input
    for(int i=1;i<=7;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<=10;i++){
        cnt[a[i]]++;
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=cnt[i];j++){
            cout<<i<<" ";
        }
    }
}