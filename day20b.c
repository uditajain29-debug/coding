//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    int numb, rem, binary = 0, place = 1;
    
    printf("Enter the decimal number: ");
    scanf("%d", &numb);
    while (numb > 0)
    {
        rem = numb % 2;
        binary = binary + (rem * place); 
        numb = numb / 2;
        place = place * 10;  
    }            
    while (binary > 0)
    {
        rem = binary % 10;
        if(rem==0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        binary = binary / 10;
    }
    printf("\n 1’s complement of the binary number is %d\n", binary);
    return 0;
}
