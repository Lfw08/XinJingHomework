#include <bits/stdc++.h>
char binary[32];
// Function to convert decimal to binary
void toBinary(int n) {
    int i = 0;

    // Convert decimal to binary using division by 2
    while (n > 0) {
        binary[i++] = (n % 2) + '0';
        n /= 2;
    }

    binary[i] = '\0';
}

int main() {
    int n;
    std::cin >> n;
    toBinary(n);

    // Print the binary representation
    int len=strlen(binary);
    for (int i = len - 1; i >= 0; i--) {
        std::cout << binary[i];
    }
    return 0;
}