//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    printf("enter the number");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
               sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
}
