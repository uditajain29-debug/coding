//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            int start=j;
            int end=i-1;
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            j=i+1;
        }
        i++;
    }
    printf("Reversed sentence: %s",str);
    return 0;
}