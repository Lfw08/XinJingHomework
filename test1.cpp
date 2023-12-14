#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[3];
    cin>>a[1]>>a[2]>>a[3];
    long long max=0;
    for(int i=0;i<3;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}