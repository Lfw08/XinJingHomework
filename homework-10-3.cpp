#include <bits/stdc++.h>
using namespace std;

int main() {
    char str1[80];
    char str2[80];
    std::cin.getline(str1, 80);
    std::cin.getline(str2, 80);

    int i = 0;
    while (str1[i] && str2[i]) {
        if (tolower(str1[i]) < tolower(str2[i])) {
            std::cout << "<" << std::endl;
            return 0;
        } else if (tolower(str1[i]) > tolower(str2[i])) {
            std::cout << ">" << std::endl;
            return 0;
        }
        i++;
    }

    if (str1[i]) {
        std::cout << ">" << std::endl;
    } else if (str2[i]) {
        std::cout << "<" << std::endl;
    } else {
        std::cout << "=" << std::endl;
    }

    return 0;
}