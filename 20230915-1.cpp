#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double weight,hei,bmi;
    cin>>weight;
    cin>>hei;
    bmi = weight/hei;
    bmi = bmi/hei;
    printf("%.2f",bmi);
    return 0;
}