#include <iostream>
using namespace std;
const int N = 3;
const int C = 5;
int weight[N + 1] = {0,3,2,2};
int Value[N + 1] = {0,5,10,20};
int f[C + 1] ;
int main(){
	for (int i = 1;i <= N;i++){       
       for (int j = weight[i];j <= C;j++){  
             f[j] = max(f[j],f[j - weight[i]] + Value[i]);  
        }  
    }  
	cout<<f[C]<<endl;
	return 0;
}
/*
P1616·è¿ñ²ËëÈ
#include <iostream>
using namespace std;
int f[10000005], weight[10005], value[10005],C, N ;
int main(){
    cin>>C>>N;
    for (int i = 1;i <= N;i++)
        cin>>weight[i]>>value[i];
	for (int i = 1;i <= N;i++){       
       for (int j = weight[i];j <= C;j++){  
             f[j] = max(f[j],f[j - weight[i]] + value[i]);  
        }  
    }  
	cout<<f[C]<<endl;
	return 0;
}*/ 
