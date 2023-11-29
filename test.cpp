#include <bits/stdc++.h> 
using namespace std;  
int main(){  
    int n,num_1,num_2,num_5,cnt=0;  
    cin>>n;  
	for(num_1=1;num_1<=100;num_1++){
		for(num_2=1;num_2<=50;num_2++){
			for(num_5=1;num_5<=20;num_5++){
				if(num_1+num_2*2+num_5*5==n){
					cnt++;
				}
			} 
		}
	}   
	cout<<cnt;  
    return 0;    
}  