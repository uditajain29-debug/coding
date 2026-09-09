#include <stdio.h>
int main()
{
    printf("enter a number: ");
    int num,sum=0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
       sum = sum+i;
    }
    printf("the sum is %d\n", sum);
}