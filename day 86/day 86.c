//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
enum menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() {
    printf("Enter the operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY) followed by two numbers: ");
    int choice, num1, num2;
    scanf("%d %d %d", &choice, &num1, &num2);
    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
    return 0;
}
