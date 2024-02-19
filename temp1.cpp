#include <iostream>
using namespace std;

// 函数用于检查年份是否特殊
bool isSpecialYear(int year) {
    int digits[4];
    int temp = year;
    int count = 0;

    // 分离年份的各个数字
    while (temp > 0) {
        digits[count++] = temp % 10;
        temp /= 10;
    }

    // 检查数字是否互不相同
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (digits[i] == digits[j]) {
                return false; // 如果有相同的数字，返回false
            }
        }
    }

    return true; // 如果所有数字都不同，返回true
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int year;
        cin >> year;

        // 从当前年份开始，逐年增加，直到找到特殊年份
        while (!isSpecialYear(year)) {
            year++;
        }

        cout << year << endl;
    }

    return 0;
}
