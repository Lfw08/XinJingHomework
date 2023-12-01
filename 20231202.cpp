#include <bits/stdc++.h>
using namespace std;
double d;
void f(double x,double y){
    double z=x+y;
    cout<<z<<endl;
    cout<<z/2;
}
double g(double x,double y){
    double z=x+y;
    cout<<z<<endl;
    z/=2;
    return z;
}
void h(double x,double y){
    d=x+y;
    cout<<d<<endl;
    d/=2;
}
int main(){
    double x,y;
    cin>>x>>y;
    h(x,y);
    cout<<d;
    return 0;
}