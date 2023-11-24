#include <bits/stdc++.h>
using namespace std;
struct house{
    double x,y;
    int person;
    double s;
    double t;
};
int main(){
    int n;
    cin>>n;
    house h[n];
    for(int i=0;i<n;i++){
        cin>>h[i].x;
        cin>>h[i].y;
        cin>>h[i].person;
        h[i].s = pow(h[i].x,2)+pow(h[i].y,2);
        h[i].s = sqrt(h[i].s);
        h[i].t = h[i].s/50.00;
        h[i].t += h[i].person*1.5;
    }
    double time;
    for(int i=0;i<n;i++){
        time += h[i].t;
    }
    cout<<time+n;
    return 0;
}