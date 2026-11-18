//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
enum exam {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    printf("Enter the status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    int status;
    scanf("%d", &status);
    switch (status) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
            break;
    }
    return 0;
}
