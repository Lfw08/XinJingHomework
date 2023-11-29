#include<iostream>
#include<cstring>
using namespace std;
char s1[500],s2[500];
int a[500],b[500],c[501];
int main(){	
	int len,len1,len2;
	cin>>s1; 
	cin>>s2;
	len1=strlen(s1);  
	for (int i= 0;i<len1;i++)
		a[i]=s1[len1-i-1]-'0';
	len2=strlen(s2);
	for (int i= 0;i<len2;i++) 
		b[i]=s2[len2-i-1]-'0';	
	if (len1>len2) 
		len=len1; 
	else 
		len=len2;	
	for (int i= 0;i<len;i++){
		c[i+1]=(a[i]+b[i]+c[i] )/ 10;
		c[i]=(c[i]+a[i]+b[i] )% 10;
	}	
	if (c[len]>0)
		len=len+1;
	for (int i=len-1;i>=0;i--)
		cout<<c[i]; 	
	return 0;
}
