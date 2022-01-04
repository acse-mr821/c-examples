// A simple primes calculator
#include <iostream>
#include <fstream>

int main() {
    
    std::fstream fs;
    fs.open ("example.txt", std::fstream::out);

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
            fs << i;
            // std::cout << i << std::endl;
        }
        fs.close();
    }
    return 1;
}