//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    enum Gender g;
};
int main() {
    struct Person p;
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    int genderInput;
    scanf("%d", &genderInput);
    p.g = (enum Gender)genderInput;
    switch (p.g) {
        case MALE:
        printf("name :%s\n gender:",p.name);
            printf("Male\n");
            break;
        case FEMALE:
                printf("name :%s\n gender:",p.name);
            printf("Female\n");
            break;
        case OTHER:
                printf("name :%s\n gender:",p.name);
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
            break;
    }
    return 0;
}
