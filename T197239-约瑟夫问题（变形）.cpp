//8个人，第3个出圈；最后顺序是123…8
//求原顺序 
#include<iostream>
using namespace std;    
int main(){
    int m,n,i,j=0,k=0;
    cin>>n>>m;
    bool a[1000];
    int b[1000];
    for(i=1;i<=n;i++)
      {a[i]=true;}
    i=1;//不写这行，也可以，因为进入循环时i=9;相当于i=1 
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
