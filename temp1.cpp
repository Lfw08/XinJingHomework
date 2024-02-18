#include <bits/stdc++.h>
using namespace std;
int cnt;
bool check(char s[100]){
    int len=strlen(s);
        for(int i=0;i<len;i++){
            //判断T
            if(s[i]=='T'){
                cnt++;
                if(cnt==13){
                    return true;
                }
            }else{
                cnt=0;
            }}
            for(int i=0;i<len;i++){
            //判断A
            if(s[i]=='A'){
                cnt++;
                if(cnt==13){
                    return true;
                }
            }else{
                cnt=0;
            }
            //最后未至13，则返回false
            if(i==len-1 && cnt<=13){
                return false;
            }
        
    }


}

int main(){
    int n;
    cin>>n;
    char s[100];
    for(int a=0;a<n;a++){
        cin>>s;
        if(check(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}
}
