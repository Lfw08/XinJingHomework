#include<bits/stdc++.h>
using namespace std;
long long a[10000],b,c[10000],length,y;
string s;
int main(){
	cin>>s>>b;
	length=s.size();
	for(int i=0;i<length;i++)
		a[i]=s[i]-'0';
	for(int i=0;i<length;i++){
		c[i]=a[i]/b;
		a[i+1]+=(a[i]%b)*10;
		if(i==length-1)
			y=a[i]%b;
	}
	int n=0;
	while(c[n]==0)
		n++;
	if(n>=length)
		cout<<0;
	else{
		for(int i=n;i<length;i++)
			cout<<c[i];
	}
    return 0;
}