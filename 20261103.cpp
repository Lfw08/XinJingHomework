#include <bits/stdc++.h>
using namespace std;
char a[256];
int main(){
    int cnt=0;
    cin.getline(a,256);
    for(int i=0;i<256;i++){
        if(a[i]==' '){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}