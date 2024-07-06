#include <bits/stdc++.h>
using namespace std;

const int maxans = 13010;
int n, M, weight[maxans], v[maxans], f[maxans];


void dpdfs(){
    for (int i = 1; i <= n; i++)
    for (int l = M; l >= weight[i]; l--)
      if (f[l - weight[i]] + v[i] > f[l]) f[l] = f[l - weight[i]] + v[i];
}

int main(){
    cin>>n>>M; //物品个数，容积
    
    for (int i = 1; i <= n; i++) {
    cin >> weight[i] >> v[i];  // 输入物品的重量和价值
  }
    dpdfs(); // 调用动态规划函数求解
    cout << f[M] << endl; // 输出最大价值

    return 0;
}

