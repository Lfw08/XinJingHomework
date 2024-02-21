#include<bits/stdc++.h>
using namespace std;

int a[114514];
bool vis[114514];
int b[114514];

int main() {
    
    int n, start, end;
    cin >> n >> start >> end;

    if (start == end) { 
        cout << 0;
        return 0;
    }

    int a[n+1]; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; // Input
    }

    queue<int> q;  
    q.push(start); 
    int cnt = 0; // Counter

    while (++cnt) {
        int x = q.size();

        if (q.empty()) { //没有任何可能
            cout << -1;
            return 0;
        }

        //就一bfs又不递归，写个自定义函数干什么，懒得写了
        for (int i = 0; i < x; i++) {
            int p = q.front(); 
            q.pop(); 

            if (p - a[p] > 0 && !b[p - a[p]]) { //没越界且没遍历
                if (p - a[p] == end) { //下楼到终点
                    cout << cnt;
                    return 0;
                }
                b[p - a[p]] = 1; 
                q.push(p - a[p]); 
            }

            if (p + a[p] <= n && !b[p + a[p]]) {//没越界且没遍历
                if (p + a[p] == end) { //上楼到终点
                    cout << cnt;
                    return 0;
                }
                b[p + a[p]] = 1; 
                q.push(p + a[p]); 
            }
        }
    }
    return 0;
}
