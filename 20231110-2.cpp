#include <bits/stdc++.h>
char a[1086],b[1086],c[10086],s1[1086],s2[1086];
using namespace std;
int main(){
    int len1,len2;
    cin>>s1>>s2;
    len1=strlen(s1);
    for(int i=0;i<len1;i++){
        a[i]=s1[len1-i-1];
    }
    len2=strlen(s2);
    for(int i=0;i<len2;i++){
        b[i]=s1[len2-i-1];
    }
    for(int i=0;i<max(len1,len2);i++){
        c[i]=a[i]+ b[i];
    }
    for(int i=0;i<strlen(c);i++){
        c[i+1]+=c[i]/10;
        c[i]+=c[i]%10;
    }
    bool d=true;
    int i=strlen(c);
    while (d){
        if(c[i]==0){
            i--;
            continue;
        }else{d=false;}
    }
    cout<<i<<endl;
    for(i+=0;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}