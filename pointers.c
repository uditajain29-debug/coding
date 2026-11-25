//Declare an integer variable, a pointer to an integer, and initialize the pointer to the address of the variable. Print both the variable’s value and the value accessed via the pointer.
#include<stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // Pointer to integer
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of ptr(address of a): %p\n", ptr);
    printf("Value of a pointed to by ptr: %d\n", *ptr);
    return 0;
}
