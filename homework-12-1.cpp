#include<bits/stdc++.h>
using namespace std;
int a[2010],b[2010],c[2018],i,y,x,len1,len2,z;
char s1[2001],s2[2001];
int main(){
	cin>>z;
	cin>>s1; cin>>s2;
	len1=strlen(s1); len2=strlen(s2);
	for (i=0; i<len1; i++)
	  if (z>10&&s1[i]>='A') a[len1-i]=s1[i]-'A'+10;
	  else a[len1-i]=s1[i]-'0';
	for (i=0; i<len2; i++)
	  if (z>10&&s2[i]>='A') b[len2-i]=s2[i]-'A'+10;
	  else b[len2-i]=s2[i]-'0';
	while (x<=len1||x<=len2){
		x++;
		c[x]=y+a[x]+b[x]; 
		y=c[x]/z; c[x]%=z;
	}
	while (c[x]==0&&x>1) x--; 
	for (i=x; i>=1; i--){
		if (c[i]<10) cout<<c[i];
        else cout<<(char)(c[i]+'A'-10);
	}
	return 0;
}