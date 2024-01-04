#include<iostream>
//与八皇后完全一样 
using namespace std;
bool a[9999];
int b[9999];
int n;
void pailie(int k){//排第k个位置 
	int i;
	if(k>n) {
		for(i=1;i<=n;i++) {
			printf("%5d",b[i]);
		}
		cout<<endl;
		return;
	}
	for(i=1;i<=n;i++)  {
		if(a[i]==true) {
			b[k]=i;//存结果 
			a[i]=false;//改状态 
			pailie(k+1);//尝试下一个位置 
			b[k]=0;//恢复结果 
			a[i]=true;//恢复状态 
		}
	}    
}
int main(){
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
      a[i]=true;
    pailie(1);
    return 0;
}
