#include <iostream>
#include <string>
#include <stack>
using namespace std;
const int MAXN = 3005;
string s, t;
int sl, tl, sz[MAXN][MAXN], xs[MAXN][MAXN], ys[MAXN][MAXN];
char c[MAXN][MAXN];
int main() {
    cin >> s >> t;//���������ַ���s��t
    sl = s.size();//����s�ĳ��ȴ���sl����
    tl = t.size();//����t�ĳ��ȴ���tl����
    s = " " + s;//��s��t��ͷ��һ���ո񣬰��ַ����±����1��ʼ��д����ȽϷ���
    t = " " + t;
    for (int i = 1; i <= sl; ++i) {
        for (int j = 1; j <= tl; ++j) {
            if (s[i] == t[j]) {
                sz[i][j] = sz[i - 1][j - 1] + 1;//��sz�����¼����������еĳ���
                xs[i][j] = i - 1;//��xs�������游��״̬�ĵ�һά����
                ys[i][j] = j - 1;//��ys�������游��״̬�ĵڶ�ά����
                c[i][j] = s[i];//��c�����¼�ڸ���״̬�������¼ӵ��ַ�
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
    //���Ƽ�¼���ַ�����ÿ���ַ�
    // ��Ϊ����˳���Ƿ��ģ���һ��ջ�����
    // һ������ջ������ַ�������ջ���Ƚ���������ʣ����ַ���������
    stack<char> st;
    int x = sl, y = tl;//�����һ��״̬��ʼ������ά����x��y
    while (sz[x][y] > 0) {
        //���c[x][y]���ǿ��ַ���˵������ַ��Ǵ𰸵�һ���֣������ǵ�ջ��
        if (c[x][y] != '\0') {
            st.push(c[x][y]);
        }
        int nx = xs[x][y];//nx��ny�Ǹ���״̬������ά���±�
        int ny = ys[x][y];
        x = nx;//�滻��x��y��ȥ��һ��ѭ��
        y = ny;
    }
    //ֻҪջ���գ����ջ�����Ԫ��
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}

