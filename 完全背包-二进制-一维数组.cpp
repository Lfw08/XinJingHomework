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
	//��1��ʼ
	weightVector.push_back(0);
	Valuevector.push_back(0);
	//��ʼ���
	int nPower = 1;
	for (int i = 1;i <= N;i++){	
		nPower = 1;
		while (nPower * weight[i] <= V ){		
			weightVector.push_back(nPower * weight[i]);
			Valuevector.push_back(nPower * Value[i]);
			nPower <<= 1;//����2 nPower*=2 
		}
	}	
	//ת��Ϊ01��������
	NNew = weightVector.size() - 1;//�����һ��0��Ҫ��ȥ
	for (int i = 1;i <= NNew;i++){//��Ʒ�����仯	
		for (int j = V;j >= weightVector[i];j--){//������������V		
			f[j] = max(f[j],f[j - weightVector[i]] + Valuevector[i]);
		}
	}
	cout<< f[V]<< endl;
	return 0;
}
