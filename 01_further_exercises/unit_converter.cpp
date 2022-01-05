// A simple primes calculator
#include <iostream>

int main() {

    int number;

    std::cout << "Input number in metres:\n";
    std::cin >> number;

    int a = number/0.0254; // number in inches
    int b = a/12; // number in feet

    std::cout << "Number in inches is " << a << std::endl;
    std::cout << "Number in feet is " << b << std::endl;

    return 0;
}