#include <stdio.h>
int main()
{
    printf("enter the number");
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
}