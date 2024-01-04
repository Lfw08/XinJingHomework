#include<bits/stdc++.h>
using namespace std;
bool a[9999];
int b[9999];
int n;
void pailie(int k){
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
			b[k]=i;
			a[i]=false;
			pailie(k+1);
			b[k]=0;
			a[i]=true;
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
