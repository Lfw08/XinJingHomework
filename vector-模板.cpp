#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}