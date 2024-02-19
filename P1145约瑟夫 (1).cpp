#include <iostream>
#include <queue>
using namespace std;
int main(){
    int k;
    cin>>k;   
	int m= k; 
    bool flag= true;
    while (flag){
        m++;//m值至少从k+1开始 
        int s= 0;//设置光标的移动
        for (int i=0; i<k; i++){//杀k个坏人 
            s = (s+ m- 1)%(2*k - i);//出列的编号；s+m-1、2*k-i同老约瑟夫那题的道理 
            if (s< k)//出列人要小于k的话，说明是杀好人，于是break
				break;
            if (i== k-1)//这时杀了k个坏人，需要结束
				flag= 0;
        }
    }
    cout<< m;    
    return 0;
}
