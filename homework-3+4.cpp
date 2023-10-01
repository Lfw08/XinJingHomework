#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a=0,b=0,c=0,d=0;
    long int tmp1,tmp2;
        
    while (a<10){
        tmp1 = 1000*a + 100 *b + 10 *c +d;
        tmp2 = 10 * a + b + 10 * c + d;
        if(tmp2 *tmp2 ==tmp1){
            cout<<a<<b<<c<<d<<endl;
        }
        else{}
        d++;
        if(d==10){
            c++;
            d = 0;
        }
        else{}
        if(c==10){
            b++;
            c = 0;
        }
        else{}
        if(b==10){
            a++;
            b = 0;
        }
        else{}
    }
    
    return 0;
}
