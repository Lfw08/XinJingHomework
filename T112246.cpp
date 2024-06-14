#include <bits/stdc++.h>
using namespace std;

int cnt, maxdep; // 定义叶子节点数量和最大深度变量
char tree[1145]; // 存储二叉树的数组
int dep[1145]; // 存储每个节点的深度

// 构建二叉树
void buildtree(int x) {
    cin >> tree[x];
    if (tree[x] != '#') {
        buildtree(2 * x);
        buildtree(2 * x + 1);
    }
}

// 中序遍历
void inOrder(int r) {
    if (tree[r] == '#') {
        return;
    }
    inOrder(2 * r);
    cout << tree[r];
    inOrder(2 * r + 1);
}

// 统计叶子节点数量
void leaf(int r) {
    if (tree[r] == '#') {
        return;
    }
    if (tree[2 * r] == '#' && tree[2 * r + 1] == '#') {
        cnt++;
    }
    leaf(2 * r);
    leaf(2 * r + 1);
}

// 计算每个节点的深度
void depth(int r) {
    if (tree[r] == '#') {
        return;
    }
    dep[r] = dep[r / 2] + 1;
    if (maxdep < dep[r]) {
        maxdep = dep[r];
    }
    depth(2 * r);
    depth(2 * r + 1);
}

// 后序遍历
void postOrder(int r) {
    if (tree[r] == '#') {
        return;
    }
    postOrder(2 * r);
    postOrder(2 * r + 1);
    cout << tree[r];
}

int main() {
    buildtree(1);
    
    inOrder(1); // 中序遍历
    cout << endl;
    postOrder(1); // 后序遍历
    cout << endl;
    leaf(1); // 统计叶子节点数量
    cout << cnt << endl;
    depth(1); // 计算每个节点的深度
    cout << maxdep << endl;
    
    return 0;
}
