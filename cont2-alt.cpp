#include <bits/stdc++.h>
using namespace std;
const int maxans = 114514;

int r, M, weight[maxans], v[maxans], f[maxans];

void dpdfs(){
	for (int i = 1; i <= r; i++)
    for (int l = weight[i]; l <= M; l++)
    if (f[l - weight[i]] + v[i] > f[l]) 
      f[l] = f[l - weight[i]] + v[i];
}

int main(){
	cin>>M>>r; 
	
	for (int i = 1; i <= r; i++) {
    cin >> v[i] >> weight[i] ; //输入占地
      // 价值不就是体积
  }
    dpdfs(); // 调用动态规划函数求解
    cout << f[M] << endl; // 输出最大价值
	
	return 0;
	
	
}