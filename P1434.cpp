#include <bits/stdc++.h>
using namespace std;

int a[1145][1145];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int r, c, mdist[1145][1145];
int ans;

bool tmp[1145][1145];

int dpdfs(int x, int y)
{
    if (mdist[x][y])
    {
        return mdist[x][y];
    }
    mdist[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && yy >= 1 && xx <= r && a[x][y] > a[xx][yy] && yy <= c)
        {
            dpdfs(xx, yy);
            mdist[x][y] = max(mdist[x][y], mdist[xx][yy] +1);
        }
    }
    return mdist[x][y];
}

int main()
{
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            ans = max(ans, dpdfs(i , j));
        }
    }
    cout << ans;
    return 0;
}
