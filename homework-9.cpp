#include <bits/stdc++.h>
using namespace std;

int main(){
    int len,cnt[26];
    for(int i=0;i<26;i++){
        cnt[i]=0;
    }
    char s[35],lett[26];
    char x;
    for(x= 'A';x<='Z';x++)
	   lett[x-'A']=x;  
    cin>>s;
    len=strlen(s);
    for(int i=0;i<len;i++){
      cnt[s[i]-'a']++;
	}
    for(int i=0;i<26;i++){
        for(int j=0;j<25;j++){
            if(cnt[j]<cnt[j+1]){
                std::swap(cnt[j],cnt[j+1]);
                std::swap(lett[j],lett[j+1]);
            }
        }
    }
    for(int i=0;i<26;i++){
      if(cnt[i]!=0){
        cout<<lett[i]<<" "<<cnt[i]<<endl;}
    }    
    return 0;
}