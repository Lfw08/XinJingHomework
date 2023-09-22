#include <iostream>
using namespace std;
int main(){
    long long a,i,num;
    i = 0;
    cin>>a;
    num=a;
    while(i<4){
        cin>>a;
        if(num<a){
            num = a;
        }
        i++;
    }
    cout<<num<<endl;
    return 0;
}
