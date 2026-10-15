//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int current_len = 0;
    int longest_len = 0;
    int longest_start_index = 0;
    for (int i = 0; sentence[i] != '\0' && sentence[i] != '\n'; i++) {
        if (sentence[i] != ' ') {
            current_len++; 
        } 
        else {
            if (current_len > longest_len) {
                longest_len = current_len;
                longest_start_index = i - current_len; 
            }
            current_len = 0; 
        }
    }if (current_len > longest_len) {
        longest_len = current_len;
        int total_len = 0;
        while (sentence[total_len] != '\0' && sentence[total_len] != '\n') {
            total_len++;
        }
        longest_start_index = total_len - current_len;
    }

    printf("Longest word: ");
    for (int i = 0; i < longest_len; i++) {
        printf("%c", sentence[longest_start_index + i]);
    }
    printf("\n");

    return 0;
}
