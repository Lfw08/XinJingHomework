#include <iostream>
#include <string>
using namespace std;

int main() {
    string isbn;
    cin >> isbn;

    // Remove the hyphens from the input ISBN number
    string digits;
    for (char c : isbn) {
        if (c != '-') {
            digits += c;
        }
    }

    // Calculate the checksum
    int checksum = 0;
    for (int i = 0; i < 9; i++) {
        checksum += (i + 1) * (digits[i] - '0');
    }
    checksum %= 11;

    // Determine the correct checksum digit
    char correctChecksum;
    if (checksum == 10) {
        correctChecksum = 'X';
    } else {
        correctChecksum = checksum + '0';
    }

    // Compare the calculated checksum with the last digit of the input ISBN number
    if (correctChecksum == digits[9]) {
        cout << "Right" << endl;
    } else {
        // Replace the last digit with the correct checksum
        digits[9] = correctChecksum;
        // Output the corrected ISBN number
        cout << digits.substr(0, 1) << "-" << digits.substr(1, 3) << "-"
             << digits.substr(4, 5) << "-" << digits.substr(9, 1) << endl;
    }

    return 0;
}