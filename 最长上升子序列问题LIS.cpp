#include<iostream>
using namespace std;
int a[100005],dp[100005];
int main(){
	int n,i,j,l,r,mid,ans,R;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[0]=0;
	l=0;R=0;
	for(i=1;i<=n;i++){
		if(a[i]>dp[R]){                          //���a[i]�������������е����һ����
			dp[R+1]=a[i];                       //a[i]ֱ��������������֮��
			R++;                              //�����г���+1
		}
		else{
			l=0;r=R;                           //������[l,r]֮�������ֲ���
			while(l<=r){
				mid=(l+r)/2;
				if(dp[mid]<a[i]){                //����м���С��a[i]
					l=mid+1;                  //˵������[mid+1,r]֮��
				}
				if(dp[mid]>=a[i]){               //����м������ڵ���a[i]
					ans=mid;                  //������ǰ�±����
					r=mid-1;                  //����[l,mid-1]֮����Ѱ�Ҹ���ǰ���±�
				}
			}
			dp[ans]=a[i];                        //��a[i]�滻Ϊdp[ans]
		}
	}
	int t=0;
	for(i=1;i<=n;i++){
		if(dp[i]!=0) t++; 
	}
	cout<<t;
}

