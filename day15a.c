#include <stdio.h>
int main(){
    int n,pro=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  pro=pro*i;
       }   printf("factorial of %d is %d\n",n,pro);
        
    }