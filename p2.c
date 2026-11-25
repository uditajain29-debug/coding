//Write a program that uses the dereference operator (*) to change the value of a variable through its pointer.
#include<stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // Pointer to integer
    printf("Value of a: %d\n", a);
    *ptr=50;
    printf("Value of a after changing through pointer: %d\n", a);
    return 0;
}
