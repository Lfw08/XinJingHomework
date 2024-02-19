#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
char s[105];
using namespace std;
int main(){
	cin>>s;	
	stack <int> st;	
	int a,b,c;
	//a=s[0]-'0';
	//st.push(a);
	int len= strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>='0' && s[i]<='9'){
			a=s[i]-'0';
			st.push(a);			
		}else{//yun suan fu
			if(s[i]=='+'){
				a=st.top();
				st.pop();
				b=st.top();
				st.pop();
				c=a+b;//cout<<"+"<<c<<endl;
				st.push(c);
			}else{
				if(s[i]=='-'){
					a=st.top();
					st.pop();
					b=st.top();
					st.pop();
					c=b-a;
					st.push(c);//cout<<"-"<<c<<endl;
				}else{
					if(s[i]=='*'){
						a=st.top();
						st.pop();
						b=st.top();
						st.pop();
						c=a*b;
						st.push(c);//cout<<"**"<<c<<endl;
					}else{
						if(s[i]=='/'){
							a=st.top();
							st.pop();
							b=st.top();
							st.pop();
							c=b/a;
							st.push(c);//cout<<a<<"/"<<b<<c<<endl;
						}
					}
				}
			}
		}
	}
	cout<<st.top();
	return 0;
}
