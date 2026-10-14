//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
# include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
       if(str[i] == ' ') {
           str[i] = '-';
       }
    }
    printf("Modified string: %s\n", str);
    return 0;
}