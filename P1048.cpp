#include <iostream>
using namespace std;
const int maxn = 13010;
int n, W, w[maxn], v[maxn], f[maxn];

// 动态规划求解背包问题
void dpdfs(){
    for (int i = 1; i <= n; i++)
    for (int l = W; l >= w[i]; l--)
      if (f[l - w[i]] + v[i] > f[l]) f[l] = f[l - w[i]] + v[i];
}

int main() {
  cin >> W >> n; // 输入背包容量和物品数量
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];  // 输入物品的重量和价值
  }
  dpdfs(); // 调用动态规划函数求解
  cout << f[W] << endl; // 输出最大价值

 return 0;  
}
