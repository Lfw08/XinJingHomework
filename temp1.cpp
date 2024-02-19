#include <iostream>
using namespace std;

// �������ڼ������Ƿ�����
bool isSpecialYear(int year) {
    int digits[4];
    int temp = year;
    int count = 0;

    // ������ݵĸ�������
    while (temp > 0) {
        digits[count++] = temp % 10;
        temp /= 10;
    }

    // ��������Ƿ񻥲���ͬ
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (digits[i] == digits[j]) {
                return false; // �������ͬ�����֣�����false
            }
        }
    }

    return true; // ����������ֶ���ͬ������true
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int year;
        cin >> year;

        // �ӵ�ǰ��ݿ�ʼ���������ӣ�ֱ���ҵ��������
        while (!isSpecialYear(year)) {
            year++;
        }

        cout << year << endl;
    }

    return 0;
}
