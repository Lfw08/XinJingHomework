#include <iostream>
using namespace std;
int main(){
    long double a,i,num;
    i = 0;
    num=0;
    while(i<5){
        cin>>a;
        if(num<a){
            num = a;
        }
        i++;
    }
    cout<<num<<endl;
    return 0;
}
