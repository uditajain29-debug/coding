//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int len1 = 0, len2 = 0;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        int j = 0;
        while (j < len1 && s2[j] == s1[(i + j) % len1]) {
            j++;
        }
        if (j == len1) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}
