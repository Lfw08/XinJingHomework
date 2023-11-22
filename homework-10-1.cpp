#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[90],b[90];
    cin.getline(a,80);
    cin.getline(b,80);
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<len1;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }
    for(int i=0;i<len2;i++){
        if(b[i]>='A'&&b[i]<='Z'){
            b[i]=b[i]-'A'+'a';
        }
    }
    int a1 = sizeof(a);
    int b1 = sizeof(b);
    if(a1>b1){
        cout<<'>'<<endl;
    }
    if(a1<b1){
        cout<<'<'<<endl;
    }
    if(a1==b1){
        cout<<'='<<endl;
    }
return 0;
}