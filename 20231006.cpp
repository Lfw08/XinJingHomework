#include <iostream>
using namespace std;
int main(){
    int s,n;
    cin>>n;
    int i = 1;
    while(i<n){
        if(n%i ==0){
            s += i;
        }
        i++;
    }
    if(s==n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
        }
    return 0;
}