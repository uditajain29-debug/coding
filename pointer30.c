//Write a program demonstrating the effect of adding 1 to an integer pointer and adding 1 to a character pointer. Print the original and resulting addresses to illustrate how pointer arithmetic scales according to the data type size.

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    char str[] = "Hello";
    
    int *int_ptr = arr;
    char *char_ptr = str;

    printf("Original int pointer address: %p\n", (void *)int_ptr);
    printf("Original char pointer address: %p\n", (void *)char_ptr);

    int_ptr++;
    char_ptr++;

    printf("After adding 1 to int pointer: %p\n", (void *)int_ptr);
    printf("After adding 1 to char pointer: %p\n", (void *)char_ptr);

    return 0;
}
