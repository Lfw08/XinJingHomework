#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[6];
    for (int i = 1; i <= 4; i++) {
        std::cin >> a[i];
    }
    int x;
     for(int i=1;i<5;i++){
        x=a[i];
    for (int j=i-1;j>=1;j--){     
        if (x<a[j]){
        a[j+1]=a[j];
        a[j]=x;
       }	   
    }	
  }
  for(int i=1;i<5;i++){
     cout<<a[i]<<" ";
  }

    return 0;
}
