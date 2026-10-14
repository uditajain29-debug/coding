   #include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha((unsigned char)str[i]) || str[i] == '\n') {
            continue;
        } 
        else {
            if(str[i] == ' ') {
                spaces++;
            } else if(str[i] >= '0' && str[i] <= '9') {
                digits++;
            } else {
                special++;
            }
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}

