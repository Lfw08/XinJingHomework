#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    int a[5] = {10, 20, 30, 40, 50};
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    int min_pos=0;
    for(int j=0;j<4;j++){
        //find the minimum number in a[j] to a[4]
        if (min > a[j]){
            min = a[j];
            min_pos = j+1;
            }
        //exchange positions
        t=a[min_pos];
        a[min_pos]=a[j];
        a[j]=t;
        
    }
    //output the new a
    cout<<a[3]<<" ";
    cout<<a[0]<<" ";
    cout<<a[2]<<" ";
    cout<<a[1]<<" ";
    return 0;
}