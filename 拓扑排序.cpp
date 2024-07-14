#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e2 + 5;
int r;


int a[MAXN][MAXN];
int in[MAXN][MAXN];

void topo() {
    queue<int> q;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            if (a[j][i] == 1) {
                in[i][j]++;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        if (in[i][0] == 0) {
            q.push(i);
        }
    }

    // topo sorting
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << char(u + 'A');

        for (int v = 0; v < r; v++) {
            if (a[u][v] == 1) {
                in[v][u]--;
                if (in[v][0] == 0) {
                    q.push(v);
                }
            }
        }
    }
}




int main(){
    cin >> r;
    for(int i = 0; i < r; i++){
        //读图
        char tmp1,tmp2;
        cin >> tmp1;
        cin>>tmp2;
        a[tmp1-'0'][tmp2-'0'] = 1;
        }

        topo();

    return 0;
}

