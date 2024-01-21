#include <bits/stdc++.h>
using namespace std;
queue<int> cards;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cards.push(i);
    }
    while (cards.size()>=2){
        cout<<cards.front()<<" ";
        cards.pop();
        int tmp=cards.front();
        cards.pop();
        cards.push(tmp);
    }
    cout<<cards.front();


    return 0;
}