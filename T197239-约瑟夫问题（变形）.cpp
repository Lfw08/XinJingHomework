//8���ˣ���3����Ȧ�����˳����123��8
//��ԭ˳�� 
#include<iostream>
using namespace std;    
int main(){
    int m,n,i,j=0,k=0;
    cin>>n>>m;
    bool a[1000];
    int b[1000];
    for(i=1;i<=n;i++)
      {a[i]=true;}
    i=1;//��д���У�Ҳ���ԣ���Ϊ����ѭ��ʱi=9;�൱��i=1 
    while(k<n){
        if(i>n)
        	i=i%n;
        if(a[i])
            j++;
        if(j==m){
            k++;
            a[i]=false;
            b[i]=k;
            j=0;
        }
        i++;
    }
    for(i=1;i<=n;i++)
    {cout<<b[i]<<" ";}
    return 0;
}
