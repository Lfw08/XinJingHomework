#include<bits/stdc++.h>
using namespace std;
int gh[7][7],visit[7];
const int n=7;
queue<int> q;
void bfs(int x) {
	if (x < 0 || x >= n) {
		throw invalid_argument("Invalid vertex");
	}
	visit[x] = 1;
	q.push(x);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u = 0; u < n; u++) {
			if (gh[v][u] != 0 && visit[u] == 0) {
				visit[u] = 1;
				cout << "-" << u;
				q.push(u);
			}
		}
	}
	return;
}
int main(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>gh[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(gh[i][j]==1){
				cout<<i;
				bfs(i);
				return 0;
			}
		}
	}
	return 0;
}