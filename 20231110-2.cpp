#include <bits/stdc++.h>
char s1[1086],s2[1086];
int a[1086],b[1086],c[10086];
using namespace std;
int main(){
    int len1,len2;
    cin>>s1>>s2;
    len1=strlen(s1);
    for(int i=0;i<len1;i++){
        a[i]=s1[len1-i-1-'0'];
    }
    len2=strlen(s2);
    for(int i=0;i<len2;i++){
        b[i]=s1[len2-i-1-'0'];
    }
    for(int i=0;i<max(len1,len2);i++){
        c[i]=a[i]+ b[i];
    }
    for(int i=0;i<max(len1,len2);i++){
        c[i+1]=(a[i]+b[i]+c[i])/10;
        c[i]=(a[i]+b[i]+c[i])%10;
    }
    //output c in reversed order and ignore '0's at the beginning
    for(int i=max(len1,len2)-1; i>=0; i--){
        if(c[i] != 0){
            cout << c[i];
        }
    }
    return 0;
    }
    