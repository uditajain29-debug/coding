//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main()
{
    char name[100];
    int word = 0;
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]==' ')
        {
            word++;
        }
    }
    for(int i=0; name[i]!='\0'; i++)
    {
        if(i==0 || name[i-1]==' ')
        {
            if(word>0)
            {
                printf("%c.",name[i]);
                word--;
            }
            else
            {
                printf("%s",name+i);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}