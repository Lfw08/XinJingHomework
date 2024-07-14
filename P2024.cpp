#include <bits/stdc++.h> //万能头 
using namespace std;
int a[300001];
int r, k, x, y, type;

int find(int x)//查找 
{
	if(x != a[x])
	{
		a[x] = find(a[x]);
	}
	return a[x];
}
void merge(int x, int y)//合并 
{
	int tmp1 = find(a[x]);
	int tmp2 = find(a[y]);
	a[tmp1] = tmp2;
}
int main()
{
	
	int ans = 0;
	cin>>r>>k;
	for(int i = 1; i <= 3 * r; i++)
	{
		a[i] = i; //我和我自己是同类
	}
	// x是同类，x + n是猎物， x + 2 * n是天敌 
	for(int i = 1; i <= k; i++)
	{
		cin>>type>>x>>y;
		if(x > r || y > r)//若只 x>n 或 y>n
		{
			ans++;//假话
		}
		else
		{
			if(type == 1)//x和y是同类 
			{
				if(find(x + r) == find(y) || find(x + 2 * r) == find(y))//如果是同类，x不能是y的猎物或天敌 
				{
					ans++;//假话++ 
				}
				else
				{
					merge(x, y);//x的同类是y的同类 
					merge(x + r, y + r);//x的猎物是y的猎物
					merge(x + 2 * r, y + 2 * r);//x的天敌是y的天敌 
				}
			}
			else//y是x的猎物 
			{
				if(x == y || find(x) == find(y) || find(x + 2 * r) == find(y))//如果y是x的猎物，x不能是y的猎物，x不能和y是同类，y不能是x的天敌 
				{
					ans++;//假话++ 
				}
				else
				{
					merge(x, y + 2 * r);//x的同类是y的天敌 
					merge(x + r, y);//x的猎物是y的同类
					merge(x + 2 * r, y + r);//x的天敌是y的猎物
				}
			}
		}
	}
	cout<<ans; 
	return 0;
}