#include <bits/stdc++.h>
using namespace std;
const int maxn=4000;

long long h,t,n;

long long weight[maxn], v[maxn], f[maxn][maxn],size[maxn];

long long M1,M2;

void dpdfs(){
	for (int i = 1; i <= n; i++)
    for (int l = M1; l >= weight[i]; l--){
    	for(int l2 = M2; l2 >= size[i]; l2-- ){
    		if (f[ l - weight[i] ][ l2-size[i] ] + v[i] > f[l][l2]){
      			f[l][l2] = f[l - weight[i]][l2-size[i]] + v[i];
      			}
    	}
    }
}

int main(){
	cin>>M1>>M2;
	cin>>n;
	
	
	for (int i = 1; i <= n; i++) {
    cin >> weight[i]>>size[i]>>v[i] ; //输入占地
    
  }
    dpdfs(); // 调用动态规划函数求解
    cout << f[M1][M2] << endl; // 输出最大价值
	
	return 0;
	
	
}



