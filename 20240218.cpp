#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n] = {0};

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    
    int maxIndex = 0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[maxIndex]){
            maxIndex = i;
        }
    }
    cout << maxIndex;

    return 0;
}
