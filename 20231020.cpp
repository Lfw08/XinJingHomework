#include <iostream>
using namespace std;
int main(){
    double n,avg,num;
    int s=0;
    cin>>n;
    cin>>avg;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>avg){
            s += 1;
        }
    }
    if(s>=1){
        cout<<s<<endl;
    }
    else{cout<<"None"<<endl;}
    return 0;
}