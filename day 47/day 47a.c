//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0; 
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq[str1[i] - 'a']++;
        }
    }
    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq[str2[i] - 'a']--;
        }
    }
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    return 0;
}