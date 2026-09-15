//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n,pro=1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    { pro=1;
        int r=n%10;
        for(int i=1;i<=r;i++)
        {
            pro=pro*i;
        }
        sum=sum+pro;
n=n/10;
    }
    if(sum==num)
    {
printf("strong number");
    }
    else 
    {
        printf("not a strong number");
    }
}