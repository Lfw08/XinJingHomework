#include <iostream>
using namespace std;
int main(){
    int m;
	cin>>m;
	for(int i = 0;i<m;i++){
		for(int g=1;g<m;g++){
				cout<<" ";
			}
		for(int g=0;g<(m-i);g++){
				cout<<"*";
			}
		cout<<endl;
	} 
    return 0;
}