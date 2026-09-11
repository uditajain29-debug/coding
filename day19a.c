//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    printf("enter the numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("lcm of%d and %d is %d\n",a,b,i);
            break;
        }
    }
}