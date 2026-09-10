#include <stdio.h>

int main()
{
    int numb, rem, binary = 0, place = 1;
    
    printf("Enter the decimal number: ");
    scanf("%d", &numb);
    
    // Convert decimal to binary in a single loop
    while (numb > 0)
    {
        rem = numb % 2;
        binary = binary + (rem * place); // Places the remainder at the correct position
        numb = numb / 2;
        place = place * 10;              // Shifts position to tens, hundreds, thousands, etc.
    }
    
    printf("Binary of the number is %d\n", binary);
    return 0;
}
