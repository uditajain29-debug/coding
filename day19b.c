//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int n,r,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
  while(n>0)
  {
      r=n%10;
     sum=sum+r;
      n=n/10;
      
  }
  printf("sum of digits is %d\n",sum);
}