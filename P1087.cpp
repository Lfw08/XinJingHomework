#include <bits/stdc++.h>
using namespace std;

char tmp[1145];
int r;

void tree(int left,int right){
    if(right>left){
        tree(left,(left+right)/2);
        tree(((left+right)/2)+1,right);
    }    

    int i,cnt0 = 0,cnt1 = 0;
    for(int i = left; i<= right;i++){
        if(tmp[i]=='0'){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    if(cnt0 && cnt1){
        cout<<"F";
    }else if(cnt0){
        cout<<"B";
    }
    else{
        cout<<"I";
    }
}

int main(){
    cin>>r;
    cin>>tmp;

    tree(0,(1<<r)-1);
    return 0;
}