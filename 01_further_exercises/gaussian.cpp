#include <iostream>
#include <cmath>

int main(){
    int x;
    int m;
    int s;

    std::cout << "Input x value: \n";
    std::cin >> x;

    std::cout << "Input m value: \n";
    std::cin >> m;

    std::cout << "Input s value: \n";
    std::cin >> s;

    float a  = 1/(s * sqrt(2*M_PI));
    float b = -(1/2)*((x-m) / s);
    float c = pow(b, 2);
    float d = a * exp(c);

    std::cout << "Gaussian is " << d << std::endl;
    return 0;
}