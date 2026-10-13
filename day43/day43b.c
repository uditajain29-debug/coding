//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

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
        if(str[i] != str[count - 1 - i]) {
            printf("Not palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}