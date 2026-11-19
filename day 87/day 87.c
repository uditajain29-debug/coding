//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
enum user_roles {
    ADMIN,
    USER,
    GUEST
};
int main() {
    printf("Enter the user role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    int role;
    scanf("%d", &role);
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
            break;
    }
    return 0;
}
