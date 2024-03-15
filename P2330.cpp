#include<bits/stdc++.h>
using namespace std ;
int u[2505] ;//是否加入树 
int s[2505] ;//没加入树的节点 
int mp[2505][2505] ; //两条路之间的分值 
int main()
{
	memset(mp , 1 , sizeof(mp)) ;//初始化mp  
	memset(s , 1 , sizeof(s)) ;//初始化s 
	
	int n , m , ans = 0 ;
	cin<<n<<m; 
	for(int i = 1 ; i <= m ; ++i)
	{
		int u , v , c ;
		scanf("%d%d%d" , &u , &v , &c) ;
		if(c < mp[u][v])//选择分值小的 
			mp[u][v] = mp[v][u] = c ; 
	}
	s[1] = 0 ;//设置起点  
	for(int i = 1 ; i <= n ; ++i)
	{
		int k = 0 ;
		for(int j = 1 ; j <= n ; ++j)//寻找还没有进入树但是s最小的路 
			if(u[j] == 0 && s[j] < s[k])
				k = j ;
		u[k] = 1 ;
		for(int j = 1 ; j <= n ; ++j)
			if(u[j] == 0 && mp[k][j] < s[j])
				s[j] = mp[k][j] ;
	}
	for(int i = 1 ; i<= n ; ++i)//寻找分值最大的路 
		if(s[i] > ans)
			ans = s[i] ;
	cout<<n-1<<ans;
	return 0 ;
}