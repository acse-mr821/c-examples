// A simple primes calculator
#include <iostream>

int main(int argc, char* argv[]) {
    
    for (int i=2; i<argc; i++) {
        int j = std::atoi(argv[i]);
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