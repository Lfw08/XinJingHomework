#include<iostream>
using namespace std;
int a[500005],n;
long long js;
int b[500005];
void gb(int left,int right){
    if((right-left)==1)
    	return;
    int middle=(left+right)/2;
    gb(left,middle);
    gb(middle,right);
    int i=left,zl=left,zr=middle;
    while(zl<middle && zr<right){
        if(a[zl]<=a[zr]){
            b[i++]=a[zl++];            
        }
        else {
            b[i++]=a[zr++];
            js+=(middle-zl);//这个地方是对的。这条与下面注释的语句留一个就对 
        }
    }    
    while(zl<middle){
        b[i++]=a[zl++];        //js+=(zr-middle);错误 
    }    
    while(zr<right){
    	b[i++]=a[zr++];
	}    
    for(i=left;i<right;i++)
    	a[i]=b[i];
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
    cout<<js<<endl;
    return 0;
}
