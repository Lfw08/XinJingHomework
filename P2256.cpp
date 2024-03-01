#include<iostream>
#include<string>
using namespace std;
struct Stu
{
	string name;
	int num;
}in[20005];
int n,m,k;
string in1,in2;
void begin()
{
	for(int i=1;i<=n;i++)
	{
		in[i].num=i;
	}
}
int findNum(string s)
{
	int out;
	for(int i=1;i<=n;i++)
	{
		if(in[i].name==s)
		{
			out=i;
			break;
		}
	}
	return out;
}
int find(int x)
{
	if(in[x].num==x)
	{
		return x;
	}
	else
	{
		return in[x].num=find(in[x].num);
	}
}
int main()
{
	cin>>n>>m;
	begin();
	for(int i=1;i<=n;i++)
	{
		cin>>in[i].name;
	}
	for(int i=0;i<m;i++)
	{
		cin>>in1>>in2;
		in[find(findNum(in1))].num=find(in[findNum(in2)].num);
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>in1>>in2;
		if(find(findNum(in1))==find(findNum(in2)))
		{
			cout<<"Yes."<<endl;
		}
		else
		{
			cout<<"No."<<endl;
		}
	}
	return 0;
}