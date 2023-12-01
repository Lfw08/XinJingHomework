
#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        std::swap(a[i], a[min_index]);
    }
    for (int i = n-1; i >= 0; i--) {
        std::cout << a[i] << " ";
    }
    return 0;
}
