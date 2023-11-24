#include <bits/stdc++.h>
using namespace std;
int main(){
    char s1[10086],s2[10086];
    char a[10086],b[10086],c[200000];
    cin>>s1;
    cin>>s2;
    int len1=strlen(s1);
    int len2=strlen(s2);
    //flip s1 into a
    for(int i=0;i<len1;i++){
        a[i]=s1[len1-i-1]-'0';
    }
    //flip s2 into b
    for(int i=0;i<len2;i++){
        b[i]=s2[len2-i-1]-'0';
    }
    
    return 0;
}