#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	v.pop_back();
	v.pop_back();
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}