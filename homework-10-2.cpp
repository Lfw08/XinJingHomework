#include <iostream>
#include <string>
using namespace std;

int main() {
    string isbn;
    cin >> isbn;

    string digits;
    for (char c : isbn) {
        if (c != '-') {
            digits += c;
        }
    }

    int sum1 = 0;
    for (int i = 0; i < 9; i++) {
        sum1 += (i + 1) * (digits[i] - '0');
    }
    sum1 %= 11;

    char corr_sum;
    if (sum1 == 10) {
        corr_sum = 'X';
    } else {
        corr_sum = sum1 + '0';
    }
    if (corr_sum == digits[9]) {
        cout << "Right" << endl;
    } else {
        digits[9] = corr_sum;

        cout << digits.substr(0, 1) << "-" << digits.substr(1, 3) << "-"
             << digits.substr(4, 5) << "-" << digits.substr(9, 1) << endl;
    }

    return 0;
}