/* Write a function to swap the values referenced two *int pointers by changing the targets. 
This can be done in a similar way, but adds an additional layer of indirection. 
Ask yourself, do you want to pass by reference, or by value? */

#include <iostream>
void swap(int,int);

int main() {
   int a, b;
   std::cout << "Enter value of a : \n";
   std::cin >> a;
   std::cout << "Enter value of b : \n";
   std::cin >> b;
   swap(a, b);
//    printf("\nAfter swapping, the values are: a = %d, b = %d \n", b, a);
   return 0;
}

void swap(int a, int b) {
    int c = a; // have to assgin value of a to another name since it will become b
    a = b; // assigning value of a to b
    b = c; // assigning value of b to c, which is the original a

    // printf("\nAfter swapping, the values are: a = %d, b = %d \n", a, b);
    std::cout<<"\nAfter swapping, the values are: \n"<<"a = "<<a<<"\t b = "<<b << std::endl;
}