#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n+1];
    for (int i=1;i<=n;i++){
        //input a[i]
        cin>>a[i];
    }
    for(int i=n;i>=1;i--){
        cout<<a[i]<<" ";
    }
    

    return 0;
}