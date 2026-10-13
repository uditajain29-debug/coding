//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
# include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str); 
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    for(int i = count - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}