#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	vector<double> v;
	for(int i=0;i<n;i++){
		double a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}