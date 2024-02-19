#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
char s[10000005],s2[10000005];
using namespace std;
int main(){
	cin>>s;	
	stack <char> st;
	st.push(s[0]);
	char a;
	int len= strlen(s);
	for(int i=1;i<len;i++){
		if(!st.empty()){
			a=st.top();
			if(a== s[i]-32||a==s[i]+32){
				st.pop();
				continue;
			}				
		}
		st.push(s[i]);
	}
	
	if(!st.empty()){
		int lenst=st.size();
		for(int i=0;i<lenst;i++){
			s2[i]= st.top();
			//cout<<s2[i];
			st.pop();
		}
		for(int i=lenst-1;i>=0;i--){
			cout<<s2[i];
		}	
	}
	/*输出两种都对
	int n=0;
	while(!st.empty()){
		
			s2[n]= st.top();
			st.pop();
			n++;
	
			
	}
	for(int i=n-1;i>=0;i--){
			cout<<s2[i];
	}*/
	return 0;
}

