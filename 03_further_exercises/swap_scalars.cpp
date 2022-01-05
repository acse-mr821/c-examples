/* Write a function to swap the values of two different scalar int values. 
This will need to be “pass by reference”, either directly, or using pointers, 
as well as a temporary variable. */

#include <stdio.h>

void swap(int &a, int &b) {
    int c = a; // have to assgin value of a to another name since it will become b
    a = b; // assigning value of a to b
    b = c; // assigning value of b to c, which is the original a
}

int main() {
   int a, b;
   printf("Enter value of a : ");
   scanf("%d", &a);
   printf("\nEnter value of b : ");
   scanf("%d", &b);
   swap(a, b);
   printf("\nAfter swapping, the values are: a = %d, b = %d", a, b);
   return 0;
}