#include<iostream>
using namespace std;
const int N=7;
int a[N] ;
/*a�����е�һ��������Ҫ����*/
int main(){
  void sort(int left, int right);  
  int i,j,x;
  for(i=0;i<N;i++)
  {cin>>a[i];}
  sort(0,N-1);
  for(i=0;i<N;i++)
  {cout<<a[i];}
  return 0;
}
void sort(int left, int right){
 int i, j;
 int s,temp;     
 if(left < right)  {         
           s = a[(left+right)/2];         
           i = left - 1;         
           j = right + 1;         
           while(1) 
           {             
                    while(a[++i] < s) ;  // �����ң�һ����ѭ������˼��ʲô������           
                    while(a[--j] > s) ;  // �����ң�һ����ѭ������˼��ʲô������             
                    if(i >= j)                 
                         break;             
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp; 
                           
           }         
           sort(left, i-1);   // ����߽��еݹ�        
           sort(j+1, right);  // ���ұ߽��еݹ�     
 }  
}

