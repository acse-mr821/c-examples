// A simple primes calculator
#include <iostream>

int main() {
    for (int i=2; i<100; i++) {
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