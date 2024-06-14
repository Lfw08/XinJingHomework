#include <bits/stdc++.h>
using namespace std;

int cnt,maxdep;
char tree[1145];
int dep[1145];

void buildtree(int x){
    cin>>tree[x];
    if(tree[x]!='#'){

        buildtree(2*x);
        buildtree(2*x + 1);
    }
}

void inOrder(int r){ //中序
    if(tree[r] == '#'){
        return;
    }
    inOrder(2*r);
    cout<<tree[r];
    inOrder(2*r + 1);
}

void left(int r){
    if(tree[r] == '#'){
        return ;
    }
    if(tree[2*r] == '#' && tree[2*r + 1] == '#'){
        cnt++;
    }
    left(2*r);
    left(2*r + 1);
}

void depth(int r){
    if(tree[r] == '#'){
        return;
    }
    dep[r]= dep[r/2] + 1;
    if(maxdep < dep[r]){
        maxdep = dep[r];
    }
    depth(r);
    depth(2*r);
}

void postOrder(){
    
}




int main(){
    buildtree(1);
}