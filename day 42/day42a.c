//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
# include <stdio.h>
int main() {
    char str[100];
    int countv = 0, countc = 0;
    printf("Enter a string: ");
    scanf("%s", str); 
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            countv++;
        } else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            countc++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", countv, countc);
    return 0;
}