/* Write a function to swap the values referenced by two *int pointers by changing the values. 
If you went the pointer version for 1. this is basically the same code. */

#include <iostream>

int main(){
int a, b, c;
int *x, *y;

std::cout << "Enter a: \n";
std::cin >> a;

std::cout << "Enter b: \n";
std::cin >> b;

x = &a;
y = &b;

c = *x; // assigning the value of a to c
*x = *y; // a becomes the value of b
*y = c; // b becomes the value of c, which is the original a

printf("\nAfter swapping, the values are: a = %d, b = %d \n", a, b);

// std::cout << "\nAfter swapping, a = " << a;
// std::cout << "\nAfter swapping, b = " << b;

return 1;
}