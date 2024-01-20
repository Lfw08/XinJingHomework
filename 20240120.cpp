#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
    string t;
    cin>>t;
    int num=int(t[0]);
    for(int i=1;i<sizeof(t);i++){
        if(t[i]>='0' && t[i]<= '9'){
            int n=int(t[i]);
            s.push(n);
        }
        else if(t[i]=='+'){//加法
            num += s.top();
            s.pop();
        }
        else if(t[i]=='-'){//减法
            num -= s.top();
            s.pop();
        }else if(t[i]=='*'){//乘法
            num *= s.top();
            s.pop();
        }else if(t[i]=='/'){//除法
            num /= s.top();
            s.pop();
        }
    }
    cout<<num;

}