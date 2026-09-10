#include <stdio.h>
int main()
{
    printf("enter the number");
    int n,rev=0;
    scanf("%d",&n);
    int original=n;
    for(int i=1;n!=0;i++)
    {
        int r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
        if(rev==original)
        {
            printf("palindrome number");
        }
        else
        {
            printf("not a palindrome number");
}
}