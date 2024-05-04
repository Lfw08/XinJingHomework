#include <bits/stdc++.h>
using namespace std;
const int maxn = 114514;

int n, M, weight[maxn], v[maxn], f[maxn];

void dpdfs(){
	for (int i = 1; i <= n; i++)
    for (int l = M; l >= weight[i]; l--)
    if (f[l - weight[i]] + v[i] > f[l]) 
      f[l] = f[l - weight[i]] + v[i];
}

int main(){
	cin>>M>>n; 
	
	for (int i = 1; i <= n; i++) {
    cin >> weight[i] ; //输入占地
    v[i] = weight[i];  // 价值不就是体积
  }
    dpdfs(); // 调用动态规划函数求解
    cout << f[M] << endl; // 输出最大价值
	
	return 0;
	
	
}