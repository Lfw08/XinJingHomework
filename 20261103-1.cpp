#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int r=10;
#include <iostream>
#include <cstdlib>
#include <ctime>

const int r = 10; // Assuming N is a constant

int main() {
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    // Create an array of size N
    int a[r];

    for (int i = 0; i < r; i++) {
        a[i] = rand() % 1000;
    }

    for (int i = 1; i < r; i++) {
        int x = a[i]; 
        int left = 0; // Left pointer
        int right = i - 1; // Right pointer

        while (left <= right) {
            int m = (left + right) / 2; // Middle index
            if (x < a[m]) {
                right = m - 1; // Move the right pointer
            } else {
                left = m + 1; // Move the left pointer
            }
        }

        
        for (int j = i - 1; j >= left; j--) {
            a[j + 1] = a[j];
        }

        
        a[left] = x;
    }

    // Print the sorted array
    for (int i = 0; i < r; i++) {
        std::cout << a[i] << std::endl;
    }

    return 0;
}
