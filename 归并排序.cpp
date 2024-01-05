#include<iostream>
using namespace std;
int a[200000],n;
int b[200000];
void gb(int left,int right){
    if((right-left)==1)//递归出口 
    	return;
    int middle=(left+right)/2;
    gb(left,middle);
    gb(middle,right);
    int i=left,zl=left,zr=middle;
    while(zl<middle && zr<right){
        if(a[zl]<=a[zr]){
        	b[i++]=a[zl++];
		}else {
        	b[i++]=a[zr++];
		}
    }
    while(zl<middle)
		b[i++]=a[zl++];
    while(zr<right)
		b[i++]=a[zr++];
    for(i=left;i<right;i++)
      a[i]=b[i];//最后又导回a数组里 
    return;
}
int main(){
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    	cin>>a[i];
    gb(0,n);
    for(i=0;i<n;i++)
    	cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}
