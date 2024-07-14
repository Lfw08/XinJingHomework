#include <bits/stdc++.h>
using namespace std;
int a[114514];
int m,c,r;

/**
 * Function to check if it is possible to transport all items within a
 * given time.
 * @param time The time limit for transportation.
 * @return True if it is possible to transport all items within the time limit,
 *         False otherwise.
 */
bool check(int time) {
    // Initialize variables
    int tmp = 1;    // Number of vehicles
    int current = 0;    // Current vehicle being used

    // Iterate through the items
    for (int i = 0; i < r; i++) {
        // If the item's time is greater than or equal to the time limit,
        // break the loop as all items have been processed.
        if (a[i] >= time) {
            break;
        }

        // If the current vehicle has space left, increment the current item
        // count. Otherwise, increment the tmp (number of vehicles) and
        // reset the current item count.
        if (current  <= c) {
            current++;
        } else {
            tmp++;
            current = 1;
        }
    }

    // Return True if the number of vehicles is less than or equal to m,
    // indicating that it is possible to transport all items within the
    // time limit.
    return tmp < m;
}

/**
 * The main function for solving the problem.
 * @return 0 indicating successful execution
 */
int main() {
    // Read the input values
    cin >> r >> m >> c;

    // Read the array of integers
    for (int i = 0; i < r; i++) {
        cin >> a[i];
    }

    // Sort the array in ascending order
    sort(a,a+r);

    // Initialize left and right bounds for binary search
    int left = 0;
    int right = a[r-1] + 1;

    // Initialize the answer to 0
    int ans = 0;

    // Perform binary search to find the minimum time
    while (left <= right) {
        int mid = ((left + right) / 2 )+ 1;
        
        // Check if the given time is valid
        if (check(mid)) {
            right = mid - 1;
            ans = mid;
        } else {
            left = mid + 1;
        }
    }

    
    cout << ans << endl;

    
    return 0;
}

