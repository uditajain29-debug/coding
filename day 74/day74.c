//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main() {
    char sourceFile[100], destinationFile[100];
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destinationFile);
    FILE *src = fopen(sourceFile, "r");
    FILE *dst = fopen(destinationFile, "w");
    if (src == NULL || dst == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    printf("File copied successfully to %s\n", destinationFile);
    fclose(src);
    fclose(dst);
    return 0;
}
