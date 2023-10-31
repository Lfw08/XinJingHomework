#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {10, 20, 30, 40, 50}; // Correctly initialize the array
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    int min_pos=0;
    for(int j=0;j<4;j++){
        for(int i=j;i<4;i++){
            if(min>=a[i]){
                min = a[i];
                min_pos=i;
            }
        }
        a[min_pos]=j+1;
        a[j+1]=min;
    }
    //output the new a
    for(int k=0;k<4;k++){
        cout<<a[k]<<" ";
        }
    return 0;
}