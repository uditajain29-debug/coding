#include <stdio.h>

int main() {
    int num1, num2, temp, a, b;

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Store original values to display in the final result
    a = num1;
    b = num2;

    // Euclidean Algorithm using a while loop
    while (num2 != 0) 
    {
        temp = num2;
        num2 = num1 % num2; // Modulo gives the remainder
        num1 = temp;
    }

    // When num2 becomes 0, num1 holds the HCF/GCD
    printf("HCF (GCD) of %d and %d is: %d\n", a, b, num1);

    return 0;
}
