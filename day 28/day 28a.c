// Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    printf("enter the number");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    { int count =0;
        for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("%d ",i);
    }
    }
}