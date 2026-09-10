#include <stdio.h>
int main()
{
    int n,r,reverse=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;n!=0;i++)
    {
        r=n%10;
        n=n/10;
        reverse=reverse*10+r;
}printf("reverse of the number is %d",reverse);
}