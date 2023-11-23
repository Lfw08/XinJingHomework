#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[150];
    char b[150];
    char c[150];
    cin >> a;
    cin >> b;
    for(int i=0; i<n; i++){
        c[i] = min(a[i], b[i]);
    }
    if(strcmp(c, a) == 0 || strcmp(c, b) == 0){
        cout << c << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0;
}