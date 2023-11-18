#include <bits/stdc++.h>
using namespace std;
// Include necessary libraries
#include <iostream>
#include <cstring>

// Define the main function
int main() {
    // Declare variables
    int len, cnt[26];
    char s[205], lett[26], x;

    // Initialize the count array
    for (int i = 0; i < 26; i++) {
        cnt[i] = 0;
    }

    // Set the letters array
    for (x = 'a'; x <= 'z'; x++) {
        lett[x - 'a'] = x;
    }

    // Read the string from the user
    std::cin >> s;

    // Get the length of the string
    len = strlen(s);

    // Count the frequency of each character
    for (int i = 0; i < len; i++) {
        cnt[s[i] - 'a']++;
    }

    // Find the most frequently appeared character
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
        }
    }

    // Output the corresponding letter
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == max) {
            std::cout << lett[i] << std::endl;
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
