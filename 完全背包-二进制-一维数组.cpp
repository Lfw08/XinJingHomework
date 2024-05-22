#include <iostream>
#include <vector>
using namespace std;
const int N = 3;
const int V = 5;
int weight[N + 1] = {0,3,2,2};
int Value[N + 1] = {0,5,10,20};
int NNew = 0;
vector<int> weightVector;
vector<int> Valuevector;
int f[V + 1] ;
int main(){
	//从1开始
	weightVector.push_back(0);
	Valuevector.push_back(0);
	//开始拆分
	int nPower = 1;
	for (int i = 1;i <= N;i++){	
		nPower = 1;
		while (nPower * weight[i] <= V ){		
			weightVector.push_back(nPower * weight[i]);
			Valuevector.push_back(nPower * Value[i]);
			nPower <<= 1;//乘以2 nPower*=2 
		}
	}	
	//转化为01背包处理
	NNew = weightVector.size() - 1;//多加了一个0，要减去
	for (int i = 1;i <= NNew;i++){//物品个数变化	
		for (int j = V;j >= weightVector[i];j--){//背包容量仍是V		
			f[j] = max(f[j],f[j - weightVector[i]] + Valuevector[i]);
		}
	}
	cout<< f[V]<< endl;
	return 0;
}
