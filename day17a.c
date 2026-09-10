#include <stdio.h>
#include <math.h>
int main(){
    printf("enter the number\n");
    int n,count=0,sum=0;
    scanf("%d",&n);
int original=n;
    for(int i=1;n!=0;i++)
    {
        int r=n%10;
        n=n/10;
        count++;
    }
    n=original;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        sum=sum+pow(r,count);
    }
if(sum==original)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }

}