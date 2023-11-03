#include <bits/stdc++.h>
using namespace std;
char a[256];
int main(){
    int cnt=0;
    cin>>a;
    for(int i=0;i<255;i++){
        if(a[i]>='0'&& a[i]<='9'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}