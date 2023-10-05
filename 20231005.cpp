#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int cnt = 0;
    char a;
    cin>>a;
    while(a!='.'){
        if(a<='z' && a >= 'a'){
            cnt++;
            
        }
        cin>>a;
    }
    cout<<cnt;
    return 0;
}