#include<iostream>
using namespace std;
int a[500005],r;
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
            js+=(middle-zl);//����ط��ǶԵġ�����������ע�͵������һ���Ͷ� 
        }
    }    
    while(zl<middle){
        b[i++]=a[zl++];        //js+=(zr-middle);���� 
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
    cin>>r;
    for(i=0;i<r;i++)
    	cin>>a[i];
    gb(0,r);
    for(i=0;i<r;i++)
    	cout<<a[i]<<' ';
    cout<<endl;
    cout<<js<<endl;
    return 0;
}
