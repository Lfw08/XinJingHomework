#include<iostream>
#include<string>
using namespace std;
const int r=10000;
void calculate_2(int a[],int b[],int c[]);
int convert(string s,int n[]);
void output(int n[]);
int a[r+1];
int b[r+1];
int c1[2*r+2];
int c2[2*r+2];
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1=="0"||s2=="0")
	{
		cout<<0;
		return 0;
	}
	convert(s1,a);
	convert(s2,b);
	calculate_2(a,b,c1);
	output(c1);
	return 0;
}
void calculate_2(int a[],int b[],int c[])
{
	int s1=a[0];
	int s2=b[0];
	int len=s1+s2;
	for(int i=1;i<=s1;i++)
	{
		for(int j=1;j<=s2;j++)
		{
			c[i+j-1]+=a[i]*b[j];
		}
	}
	for(int i=1;i<=len;i++)
	{
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	if(c[len]==0) 
	{
		len--;
	}
	c[0]=len;
}
int convert(string s,int n[]) 
{
	int length=s.length();
	for(int i=1;i<=length;i++)
	{
		n[i]=s[length-i]-'0';
	}
	n[0]=length;
	return length;
}
void output(int n[])
{
	int length=n[0];
	for(int i=length;i>=1;i--)
	{
		cout<<n[i];
	}
	cout<<endl;
}