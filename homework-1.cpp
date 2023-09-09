#include <iostream>
using namespace std;
int main() {
    long double r,pi,s_temp,s;
    cin>>r;
    pi=3.14;
    s_temp=pi * r * r ;
    int s_temp1 ;
    s_temp1 = s_temp * 100;
    s = (long double)s_temp1;
    s = s / 100;
    cout<<s<<endl;
    return 0;
}