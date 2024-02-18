#include <bits/stdc++.h>
using namespace std;
int b[10];
int main(){
    int a[10];
    
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        b[a[i]]++;
    }
    for(int i=0;i<10;i++){
        int tmp=b[i];
        for(int j=0;j<tmp;j++){
            a[j]=i;
        }
    }
    cout<<a[2]+a[3]+a[4]<<endl;
    
    return 0;
}