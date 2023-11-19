#include<iostream>
using namespace std;
int main(){
	string b;
    getline(cin, b);
	for(int i=0;i<b.length();i++){
		if((b[i]>='w'&&b[i]<='z')||(b[i]>='W'&&b[i]<='Z')){
			b[i]=b[i]-22;
		}
		else if((b[i]>='A'&&b[i]<='V')||(b[i]>='a'&&b[i]<='v')){
			b[i]=b[i]+4;
		}
		else{
			b[i]=b[i];
		}
	}
	cout<<b<<endl;
	return 0;
} 