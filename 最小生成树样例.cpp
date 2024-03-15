#include <bits/stdc++.h>
using namespace std;

int n, m;
int gh[110][110];
int vis[110];
int out = 0;
int tmpk, tmpj, w;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int g = 1; g <= n; g++) {
            cin >> gh[i][g];
        }
    }
    vis[0] = 1;
    for (int num = 0; num < n - 1; num++) {
        for (int j = 0; j < n; j++) {
            if (vis[j] == 1) {
                w = 1000;
                for (int k = 0; k < n; k++) {
                    if (vis[k] == 0 && gh[j][k] <= w) {
                        tmpj = j;
                        tmpk = k;
                        w = gh[j][k];
                        break;
                    }
                }
            }
        }
        vis[tmpk] = 1;
        out += w;
        cout << tmpj << "-----" << tmpk << endl;
    }
    cout<<endl;
    cout<<out;
    return 0;
}
