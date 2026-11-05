//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Open info.txt in write mode
    FILE *file = fopen("info.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Write name and age to the file using fprintf()
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
