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
		if(a[i]>dp[R]){                          //如果a[i]大于上升子序列的最后一个数
			dp[R+1]=a[i];                       //a[i]直接连接在子序列之后
			R++;                              //子序列长度+1
		}
		else{
			l=0;r=R;                           //在区间[l,r]之间做二分查找
			while(l<=r){
				mid=(l+r)/2;
				if(dp[mid]<a[i]){                //如果中间数小于a[i]
					l=mid+1;                  //说明答案在[mid+1,r]之间
				}
				if(dp[mid]>=a[i]){               //如果中间数大于等于a[i]
					ans=mid;                  //保留当前下标变量
					r=mid-1;                  //区间[l,mid-1]之间再寻找更靠前的下标
				}
			}
			dp[ans]=a[i];                        //将a[i]替换为dp[ans]
		}
	}
	int t=0;
	for(i=1;i<=n;i++){
		if(dp[i]!=0) t++; 
	}
	cout<<t;
}

