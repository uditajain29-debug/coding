#include <stdio.h>
int main(){
    int n,pro=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {if(i%2==0)
        pro=pro*i;
       }   printf("product of n even numbers is %d\n",pro);
        
    }