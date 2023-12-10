#include <bits/stdc++.h>
using namespace std;
void sort(double a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        int j;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        std::swap(a[i],a[min]);
    }
        
    return;
    }

int main(){
    int n;
    cin>>n;
    double a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
    return 0;
}