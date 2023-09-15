#include <iostream>
using namespace std;
int main(){
    double weight,price;
    cin >> weight ;
    if (weight>4){
        price = 20 + 4*(weight-4);
    }
    else{
        price = 5*weight;
    }
    cout << price << endl;


    return 0;
}