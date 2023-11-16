#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[10086];
    cin.getline(a,10000);
    int n= strlen(a);
    for(int i=0;i<n;i++){
        char b = a[i];
        if((b>='b' && b<='z')|(b>='B' && b<='Z')){
            a[i]--;
        }else{
            if(b=='a'){
                a[i]='z';
            }
            if(b=='A'){
                a[i]='Z';
            }
        }
    }
    cout<<a;
    return 0;
}