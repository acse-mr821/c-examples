#include <iostream>

int main() {
    int n;
    std::cout << "How many numbers should I run to?";
    std::cin >> n;
    for (int i=1; i<n+1; i++) {
        if (i%15 == 0) {
            std::cout << "Fizzbuzz\n";
        } else if (i%3 == 0) {
            std::cout << "Fizz\n";
        } else if (i%5 == 0) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << std::endl;
        }
    }
}
