#include <stdio.h>
int main()
{
    printf("enter the number");
    int n;
    scanf("%d",&n);
    printf("factors of the number are\n");
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
               printf("%d\n",i);
        }
    }
}
