#include <iostream>
#include <queue>
using namespace std;
int main(){
    int k;
    cin>>k;   
	int m= k; 
    bool flag= true;
    while (flag){
        m++;//mֵ���ٴ�k+1��ʼ 
        int s= 0;//���ù������ƶ�
        for (int i=0; i<k; i++){//ɱk������ 
            s = (s+ m- 1)%(2*k - i);//���еı��ţ�s+m-1��2*k-iͬ��Լɪ�������ĵ��� 
            if (s< k)//������ҪС��k�Ļ���˵����ɱ���ˣ�����break
				break;
            if (i== k-1)//��ʱɱ��k�����ˣ���Ҫ����
				flag= 0;
        }
    }
    cout<< m;    
    return 0;
}
