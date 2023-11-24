#include<iostream>
#include<cstring>
using namespace std;
int a[10090],b[10090];
int main(){
	char s1[10090],s2[10090],t[10090];
	int len,len1,len2,i;
	cin>>s1; 
	cin>>s2; 
	len1=strlen(s1);  
	len2=strlen(s2);
	
	if(len1<len2 || len1==len2&&strcmp(s1,s2)<0){
		cout<<"-";
		strcpy(t,s1);
		strcpy(s1,s2);
		strcpy(s2,t);
		swap(len1,len2);
	}
	
	if(strcmp(s1,s2)==0){
		cout<<'0'<<endl;
	}
	
	for (i= 0;i<len1;i++)
		a[i]=s1[len1-i-1]-'0';
	
	for (i= 0;i<len2;i++) 
		b[i]=s2[len2-i-1]-'0';
	
	//现在开始计算
	for(int c:s1){
		
	}	
		
		
	return 0;
}
