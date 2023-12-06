#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt2=0;
    cin>>n;
    int s[n];
    int cnt[1000]={0};
    for(int i=0;i<n;i++){
        cin>>s[i];
        }
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(cnt[i]!=0){
            cnt2++;
        }
    }
    cout<<cnt2<<endl;
    for(int i=0;i<1000;i++){
        if(cnt[i]!=0){
            cout<<i<<" ";
        }
    }


    return 0;
}