#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a,y;
	cin>>a; 
	y=a*a*3.141;
	cout.setf(ios::fixed);
	cout<<setprecision(2)<<y<<endl; 
	return 0;
}
