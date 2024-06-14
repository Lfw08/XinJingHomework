#include <bits/stdc++.h>
using namespace std;


char tree[1145];

void buildtree(int x){
    cin>>tree[x];
    if(tree[x]!='#'){

        buildtree(2*x);
        buildtree(2*x + 1);
    }
}

int main(){
    buildtree(1);
    
}