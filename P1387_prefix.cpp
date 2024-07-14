#include <bits/stdc++.h>
using namespace std;

int board[114][114];
int prefix[114][114];
int r,m;
int k,ans;


void pre(){
    for(int i=1;i<=r;++i)
	for(int j=1;j<=m;++j)
	{
		prefix[i][j]=board[i][j]+prefix[i][j-1]+prefix[i-1][j]-prefix[i-1][j-1];
        
	}
    for(int i=1;i<=r;++i)
	    for(int j=1;j<=m;++j){
            if(board[i][j]!=1)
		        continue;//不是1的不用看了
		for(int k=2;i-k>=0&&j-k>=0;++k)
		{
			if(prefix[i][j]+prefix[i-k][j-k]-prefix[i-k][j]-prefix[i][j-k]==k*k){//关键
                if(k>ans)
			        ans=k;
            }
		}}
	
		
	
    for(int i=1;i<=r;++i)
	    for(int j=1;j<=m;++j)
	    {
		    if(board[i][j]!=1)
		        continue;
		    for(int k=ans+1/*直接遍历比当前答案大的数*/;i-k>=0&&j-k>=0;++k)
		    {
			    if(prefix[i][j]+prefix[i-k][j-k]-prefix[i-k][j]-prefix[i][j-k]==k*k)
			        ans=k;
			    else
			        break;
            //如果小的正方形不行了，比他大的但有包含它的正方形肯定不行
		}
	}
}

int main(){
    cin>>r>>m;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=m;j++){
            cin>>board[i][j];
        }
    }
    pre();
    cout<<ans;

}
