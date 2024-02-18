#include <iostream>
#include <cmath>

using namespace std;

// 判断三角形类型
string judgeTriangleType(int a, int b, int c) {
    // 判断是否能构成三角形
    if (a + b <= c || a + c <= b || b + c <= a) {
        return "bssjx";
    }

    // 判断三角形类型
    if (a == b && b == c) {
        return "db"; // 等边三角形
    } else if (a == b || b == c || a == c) {
        // 等腰三角形
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
            return "dyzj"; // 等腰直角三角形
        } else {
            return "dyrj"; // 等腰锐角三角形
        }
    } else {
        // 普通三角形
        if (a * a + b * b == c * c) {
            return "ptzj"; // 普通直角三角形
        } else if (a * a + b * b > c * c) {
            return "ptrj"; // 普通锐角三角形
        } else {
            return "dydj"; // 等腰钝角三角形
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << judgeTriangleType(a, b, c) << endl;
    }
    return 0;
}
