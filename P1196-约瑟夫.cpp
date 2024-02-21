#include <iostream>
#include <queue>
using namespace std;
int a[105];

/*int main(){
	int m,n,s,i,j,temp;
	cin>>n>>m;
	for (i=1;i<=n;i++) { 
	 a[i]=i;
	}  
	s=1;
	for( i=n;i>=2;i--){
	    s=(s+m-1)% i;
	    if (s==0)
	      {s=i;}
	    temp=a[s];
	    for (j=s; j<=i-1;j++)
	      a[j]=a[j+1];
	    a[i]=temp;
	}
	for (i=n;i>=1;i--)
	  cout<<a[i]<<" ";	
	return 0;
}*/
/*
int main(){
    int n,m,i,j=0,k=0;
    bool b[1000];
    cin>>n>>m;
    for(i=1;i<=n;i++){
        b[i]=true;
    }
    
    //k控制是已经死了几个人
    //i是指针，就是当前走到哪里
    //j是数1、2、3 
    i=1;
    while(k<n)
    {
        //if(i>n)
        //{i=i%n;}这个if放哪里都可以
        if(b[i]==true)j++;
        if(j==m)
        {
            b[i]=false;
            cout<<i<<" ";
            k++;
            j=0; 
        }
        i++;
        if(i>n)
        {i=i%n;}
    }
    return 0;
}
*/
int main(){	
	queue<int >q;
	int n, m;
	cin>>n>>m;
	for (int i=1;i<=n;i++) { 
		q.push(i);
	}  
	int s=1;
	while(!q.empty()){	    
	    if (s!=m){
	    	int a=q.front();
	    	q.pop();
	    	q.push(a); 
	    	s++;
	    }else{
	    	s=1;
	    	cout<<q.front()<<" ";
	    	q.pop() ;
	    }
	    	
	}		
	return 0;
}
