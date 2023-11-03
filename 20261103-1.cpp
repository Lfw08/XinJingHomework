#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int N=10;
int main(){
	srand((unsigned)time(NULL));
	int a[N];
	int i,j,x,l,r,m;
	for(i=0;i<N;i++){
		a[i]=rand()%1000;
	}  
	for(i=1;i<N;i++){
		x=a[i];r=i-1;l=0;
		while(l<=r){
			m=(l+r)/2;
		 	if (x<a[m]){
				r=m-1;
			}else{
				l=m+1;
			}
		}
		for (j=i-1;j>=l;j--){
			a[j+1]=a[j];//后移
		}
		a[l]=x;
	}
	for(i=0;i<N;i++)
	{cout<<a[i]<<endl;}   
	return 0; 
}