#include <bits/stdc++.h>
using namespace std;
int f(int x,int a,int b,int c){
    return a*pow(x,2)+b*x+c;
}
int main(){
    int a,b,c,num;
    char d[1005];
    cin>>a>>b>>c;
    cin>>d;
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<d[f(num,a,b,c)-1];
    }
    
    return 0;
}