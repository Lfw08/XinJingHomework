#include<bits/stdc++.h>
//Prim 算法
using namespace std ;
int enter[2505] ;
int pending[2505] ;
int mp[2505][2505] ; //两条路之间的分值 
int main()
{
	//初始化
	memset(mp , 1 , sizeof(mp)) ;  
	memset(pending , 1 , sizeof(pending)) ;
	
	int n , m , ans = 0 ;
	cin>>n>>m; 
	for(int i = 1 ; i <= m ; ++i)
	{
		//3个边
		int u , v , c ;
		scanf("%d%d%d" , &u , &v , &c) ;
		if(c < mp[u][v])//选择分值小的 
			mp[u][v] = mp[v][u] = c ; 
	}
	pending[1] = 0 ;//设置起点  
	for(int i = 1 ; i <= n ; ++i)
	{
		int k = 0 ;
		for(int j = 1 ; j <= n ; ++j)//还没有进入树但是s最小
			if(enter[j] == 0 && pending[j] < pending[k])
				k = j ;
		enter[k] = 1 ;
		for(int j = 1 ; j <= n ; ++j)
			if(enter[j] == 0 && mp[k][j] < pending[j])
				pending[j] = mp[k][j] ;
	}
	for(int i = 1 ; i<= n ; ++i)//寻找分值最大的路 
		if(pending[i] > ans)
			ans = pending[i] ;
	cout<<n-1<<" "<<ans;
	return 0 ;
}