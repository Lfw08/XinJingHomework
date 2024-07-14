#include <bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> pri;
bool not_prime[1000]={false};

void pre(int n) {
  
}

int main(){
    for(int i =1; i<N; i++){
        not_prime[i] = true;
    }
    for (int i = 2; i <= N; ++i) {
    if (!not_prime[i]) {
      pri.push_back(i);
    }
    for (int pri_j : pri) {
      if (i * pri_j > N) break;
      not_prime[i * pri_j] = true;
      if (i % pri_j == 0) {
        // i % pri_j == 0
        // 换言之，i 之前被 pri_j 筛过了
        // 由于 pri 里面质数是从小到大的，所以 i 乘上其他的质数的结果一定会被
        // pri_j 的倍数筛掉，就不需要在这里先筛一次，所以这里直接 break
        // 掉就好了
        break;
      }
    }
  }
    
    for(int i = 1; i <N;i++){
        if(not_prime[i] <= true){
            cout << i << " ";
        }
    }

}
