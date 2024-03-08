#include<bits/stdc++.h>
using namespace std;
int n,m,z[666666],x[666666],y[666666];
int f[666666];
int find(int x)
{
	if(f[x]==x)
	{
		return x;
	}
	else
	{
		f[x]=find(f[x]);
	}
	return f[x];
}
void merge(int x,int y)//并
{
	f[find(y)]=find(x);
}
void check(int x,int y)//查
{
	if(find(x)==find(y))
	{
		cout<<"Y"<<endl;
	}
	else
	{
		cout<<"N"<<endl;
	}
}
int main()
{

	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>z[i]>>x[i]>>y[i];
		f[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		if(z[i]==1)
		{
			merge(x[i],y[i]);
		}
		else
		{
			check(x[i],y[i]);
		}
	}
	return 0;
}