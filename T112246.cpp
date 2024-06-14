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

void leaf(int r){
    if(tree[r] == '#'){
        return ;
    }
    if(tree[2*r] == '#' && tree[2*r + 1] == '#'){
        cnt++;
    }
    leaf(2*r);
    leaf(2*r + 1);
}

void depth(int r){
    if(tree[r] == '#'){
        return;
    }
    dep[r]= dep[r/2] + 1;
    if(maxdep < dep[r]){
        maxdep = dep[r];
    }
    depth(2*r);
    depth(2*r+1);
}

void postOrder(int r){
    if(tree[r] == '#'){
        return;
    }
    postOrder(2*r);
    postOrder(2*r + 1);
    cout<<tree[r];
}

int main(){
    buildtree(1);
    
    /* for(int i = 1; i < 15; i++){
        cout<<tree[i];
    }
    */
    

    inOrder(1);
    cout<<endl;
    postOrder(1);
    cout<<endl;
    leaf(1);
    cout<<cnt<<endl;
    depth(1);
    cout<<maxdep<<endl;
    
    return 0;
}