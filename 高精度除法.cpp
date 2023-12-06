#include <bits/stdc++.h>
using namespace std;
char s[114514];
int main(){
    char a[114514];
    char result[114514];
    int b;
    cin>>s;
    cin>>b;
    for(int i=0;i<strlen(s);i++){
        a[i]=s[i]-'0';
    }
    for(int i=0;i<strlen(a);i++){
        a[i+1]+=a[i]*10%b;
        result[i]=a[i]/b ;
        if(i==strlen(s)-1)
			long long y=a[i]%b;
    }
    for(int i=0;i<strlen(result);i++){
        cout<<result[i];
    }

    return 0;
}