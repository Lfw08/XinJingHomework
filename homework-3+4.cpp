#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double x1,x2,y1,y2;
    long double tmp;
    double tmp1;
    while(cin>>x1>>y1>>x2>>y2){
        
        tmp = x2-x1;
        tmp = tmp * tmp;
        tmp += (y2-y1)*(y2-y1);
        tmp = sqrt(tmp);
        tmp1 = tmp;
        printf("%.2f",tmp1);
        cout<<endl;
    }
    
 
 
    return 0;
}