//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int n,r,pro=1;
    printf("enter the number\n");
    scanf("%d",&n);
  while(n>0)
  {
      r=n%10;
      if(r%2!=0)
      {
          pro*=r;
      }
      n=n/10;
      
  }
  printf("product of odd digits is %d\n",pro);
}