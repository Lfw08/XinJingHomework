#include <bits/stdc++.h>
using namespace std;
int pool[2510][2510] , f[2510][2510][2];
int maxn;
int r,m;

void dp(){
    for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(pool[i][j])
			{
				int x = f[i-1][j-1][0] + 1 , y = f[i-1][j+1][1] + 1;
				for(int k = 1; k <= f[i-1][j-1][0]; k++)
					if(pool[i-k][j] || pool[i][j-k])
					{
						x = k;
						break;
					}
				for(int k = 1; k <= f[i-1][j+1][1]; k++)
					if(pool[i-k][j] || pool[i][j+k])
					{
						y = k;
						break;
					}
				f[i][j][0] = x;
				f[i][j][1] = y;
				maxn = max(max(x , y) , maxn);
			}
		}
	}
}


int main()
{
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> pool[i][j];
		}
	}
	dp();
	cout << maxn << endl;
	return 0;
}