#include <bits/stdc++.h>
using namespace std;
int sum[1145];
int cnt;
struct People{
	int nation;
	int time;
};

int main(){
	queue<People> q;
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int t,k;
		cin>>t>>k;
		for(int j=0;j<k;j++){
			int nation;
			cin>>nation;
			if(sum[nation]==0){
				cnt++;
			}
			sum[nation]++;
			People a;
			a.nation = nation;
			a.time = t;
			q.push(a);
		}
		while(!q.empty() && q.front().time <= t - 86400){
			if(sum[q.front().nation]==0){
				cnt--;
			}
			q.pop();
		}
		cout<<cnt<<endl;
	}
	return 0;
}