// A simple primes calculator
#include <iostream>

int main() {

    int number;

    std::cout << "How many numbers to calculate?\n";
    std::cin >> number;

    for (int i=2; i<number; i++) {
        int j = 2;
        bool flag = true;
        while (j*j<i) {
            if (i%j) {
                flag = false;
                break;
            }
            j++;
        }
        if (flag) {
            std::cout << i << std::endl;
        }
    }
    return 1;
}