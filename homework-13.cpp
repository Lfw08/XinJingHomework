#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	double sum1,s1=0; 
	int a[1001],b[1001];     
	cin>>num;
	for(int i=1;i<=num;i++)    
	{
		cin>>a[i];
		b[i]=i;
	}
	for(int i=1;i<=num;i++)    
	{
		for(int j=i;j<=num;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=1;i<=num;i++)
	{
		s1+=a[i]*(num-i);
	}
	sum1=s1/num;
	for(int i=1;i<=num;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	printf("%.2f\n",sum1);
	return 0;
}