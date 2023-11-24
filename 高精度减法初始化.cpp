#include<iostream>
#include<cstring>
using namespace std;
int a[10090],b[10090];
#include <iostream>
#include <cstring>

int main() {
    char s1[10090], s2[10090], t[10090] = {0};
    int len1, len2, i;

    // Read input strings
    std::cin >> s1;
    std::cin >> s2;

    // Calculate lengths of the strings
    len1 = strlen(s1);
    len2 = strlen(s2);

    // Sort the strings in descending order
    if (len1 < len2 || (len1 == len2 && strcmp(s1, s2) < 0)) {
        std::cout << "-";
        strcpy(t, s1);
        strcpy(s1, s2);
        strcpy(s2, t);
        std::swap(len1, len2);
    }

    // Check if the strings are equal
    if (strcmp(s1, s2) == 0) {
        std::cout << '0' << std::endl;
    }

    int a[10090], b[10090];

    // Convert string s1 to integer array a
    for (i = 0; i < len1; i++) {
        a[i] = s1[len1 - i - 1] - '0';
    }

    // Convert string s2 to integer array b
    for (i = 0; i < len2; i++) {
        b[i] = s2[len2 - i - 1] - '0';
    }

    // Subtract b from a
    for (int i = 0; i < len1; i++) {
        if (a[i] < b[i]) {
            a[i + 1] -= 1;
            a[i] += 10;
        }
        a[i] -= b[i];
    }

    int k = len1;

    // Find the first non-zero digit in the result
    while (a[k] == 0) {
        k--;
    }

    // Print the result
    for (int i = k; i >= 0; i--) {
        std::cout << a[i];
    }

    return 0;
}
