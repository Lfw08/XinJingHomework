
#include <iostream>

int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        int min_index = i;
        for (int j = i + 1; j < 4; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        std::swap(a[i], a[min_index]);
    }
    for (int i = 0; i < 4; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
