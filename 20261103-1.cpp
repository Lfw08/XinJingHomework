#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int N=10;
#include <iostream>
#include <cstdlib>
#include <ctime>

const int N = 10; // Assuming N is a constant

int main() {
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    // Create an array of size N
    int a[N];

    // Initialize the array with random values between 0 and 999
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 1000;
    }

    // Perform the insertion sort algorithm on the array
    for (int i = 1; i < N; i++) {
        int x = a[i]; // Store the current element
        int left = 0; // Left pointer
        int right = i - 1; // Right pointer

        // Find the correct position for the current element in the sorted subarray
        while (left <= right) {
            int m = (left + right) / 2; // Middle index
            if (x < a[m]) {
                right = m - 1; // Move the right pointer
            } else {
                left = m + 1; // Move the left pointer
            }
        }

        // Shift the elements to the right of the correct position
        for (int j = i - 1; j >= left; j--) {
            a[j + 1] = a[j];
        }

        // Insert the current element at the correct position
        a[left] = x;
    }

    // Print the sorted array
    for (int i = 0; i < N; i++) {
        std::cout << a[i] << std::endl;
    }

    return 0;
}
