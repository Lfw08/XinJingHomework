#include <iostream>
using namespace std;

int hanoi(int n) {
    int count = 0;
    int total = 1;
    for (int i = 1; i <= n; i++) {
        total = 2 * total + 1;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    int result = hanoi(n);
    cout << result << endl;
    return 0;
}