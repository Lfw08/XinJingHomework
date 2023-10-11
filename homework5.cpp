#include <iostream>
using namespace std;
int main(){
    int n,i;
    bool a = 1;
    for (i = 2,i<n,i++){
        if (n%i=0){
            a = 0;
        }
        if(a=0){
            cout<<"F"<<endl;
            break;
        }
        
    }
    if(a = 1){
        cout<<"T"<<endl;
    }
    return 0;
}