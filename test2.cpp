#include <iostream>
using namespace std;

// Function to check if the year is a special year
bool isSpecialYear(int year) {
    int digits[4] = {0}; // Initialize digits array with 0
    int temp = year;

    // Separate the digits of the year
    for (int i = 0; i < 4; ++i) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // Check if all digits are unique
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (digits[i] == digits[j]) {
                return false; // If any digits are the same, return false
            }
        }
    }

    return true; // If all digits are unique, return true
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

        if(year!=1987){
        cout << year << endl;}
    }

    return 0;
}
