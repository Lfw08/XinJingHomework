#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s[n];
    int b[1000];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        b[s[i]]++;
    }
    for(int i=0;i<strlen(b);i++){
        if(b[i]!=0){
            cout<<b[i];
        }
    }
    return 0;
}