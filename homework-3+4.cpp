#include <iostream>
using namespace std;
int main(){
    double n,m,i,num = 0,a;
    cin>>m>>n;
    if(m>n){
        a = m;
    }
    else{
        a = n;
    }
    for ( i=1 ; i<=a ; ++i) {
        if((int)n%(int)i ==0){
            if((int)m%(int)i==0){
                num = i;
            }
        }
    }
    cout<<num<<endl;
    return 0;
}