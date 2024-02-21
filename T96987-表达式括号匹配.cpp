#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main(){
	char a;
	bool flag= true;
	stack <char> st;
	while(cin>>a){
		if(a=='@'){
			break;
		}
		if(a=='('||a=='['||a=='{'){
			st.push(a);
		}else{
			if(a==')'){				
				if(!st.empty()){
					if(st.top()=='('){
						st.pop();
					}						
					else{
						cout<<"NO"<<endl;
						flag=false;
						break;
					}	
				}else{
					cout<<"NO"<<endl;
					flag=false;
					break;
					}
			}else{
				if(a==']'){
					if(!st.empty()){
						if(st.top()=='['){
							st.pop();
						}						
						else{
							cout<<"NO"<<endl;
							flag=false;
							break;
						}	
					}else{
						cout<<"NO"<<endl;
						flag=false;
						break;
						}
				}else{
					if(a=='}'){
						if(!st.empty()){
							if(st.top()=='{'){
								st.pop();
							}						
							else{
								cout<<"NO"<<endl;
								flag=false;
								break;
							}	
						}else{
							cout<<"NO"<<endl;
							flag=false;
							break;
						}
					}else{
						continue;
					}
				}
			}
			
		}
	}
	if(flag){
		if(!st.empty())
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;	
	}	
	return 0;
}

