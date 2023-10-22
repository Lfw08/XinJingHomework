#include <iostream>
int main() {
    long long n;
    std::cin >> n;
    for(long long i=1;i<=n;i++){
        // see whether i is a perfect number
        long long sum = 0;
        for (int divisor = 1; divisor < i; divisor++) {
            if (i % divisor == 0) {
                sum += divisor;
            }
        }

        if (sum == i) {
            // i is a perfect number
            // Add your code here
            std::cout<<sum<<std::endl;
        } else {
            // i is not a perfect number
            // Add your code here
    }
    return 0;
}
}