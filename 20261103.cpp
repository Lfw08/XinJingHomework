#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[6];
    for (int i = 1; i <= 4; i++) {
        std::cin >> a[i];
    }

    for (int i = 1; i <= 4; i++) {
        for (int j = i; j >= 1; j--) {
            if (a[j] < a[j - 1]) {
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 1; i <= 4; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}
