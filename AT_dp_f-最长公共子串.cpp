#include <iostream>
#include <string>
#include <stack>
using namespace std;
const int MAXN = 3005;
string s, t;
int sl, tl, sz[MAXN][MAXN], xs[MAXN][MAXN], ys[MAXN][MAXN];
char c[MAXN][MAXN];
int main() {
    cin >> s >> t;//输入两个字符串s和t
    sl = s.size();//计算s的长度存在sl里面
    tl = t.size();//计算t的长度存在tl里面
    s = " " + s;//在s和t开头补一个空格，把字符串下标调到1开始，写代码比较方便
    t = " " + t;
    for (int i = 1; i <= sl; ++i) {
        for (int j = 1; j <= tl; ++j) {
            if (s[i] == t[j]) {
                sz[i][j] = sz[i - 1][j - 1] + 1;//用sz数组记录最长公共子序列的长度
                xs[i][j] = i - 1;//用xs数组来存父亲状态的第一维坐标
                ys[i][j] = j - 1;//用ys数组来存父亲状态的第二维坐标
                c[i][j] = s[i];//用c数组记录在父亲状态基础上新加的字符
            } else {
                if (sz[i - 1][j] < sz[i][j - 1]) {
                    sz[i][j] = sz[i][j - 1];
                    xs[i][j] = i;
                    ys[i][j] = j - 1;
                } else {
                    sz[i][j] = sz[i - 1][j];
                    xs[i][j] = i - 1;
                    ys[i][j] = j;
                }
            }
        }
    }
    //倒推记录答案字符串的每个字符
    // 因为计算顺序是反的，用一个栈保存答案
    // 一会儿输出栈里面的字符，利用栈的先进后出的性质，把字符串倒过来
    stack<char> st;
    int x = sl, y = tl;//从最后一个状态开始，两个维度是x和y
    while (sz[x][y] > 0) {
        //如果c[x][y]不是空字符，说明这个字符是答案的一部分，把它记到栈里
        if (c[x][y] != '\0') {
            st.push(c[x][y]);
        }
        int nx = xs[x][y];//nx和ny是父亲状态的两个维度下标
        int ny = ys[x][y];
        x = nx;//替换掉x和y，去下一次循环
        y = ny;
    }
    //只要栈不空，输出栈里面的元素
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}

