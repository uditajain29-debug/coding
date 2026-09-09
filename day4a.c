#include <stdio.h>
int main()
{
int a, b, c;
printf("enter the value of a:");
scanf("%d", &a);
printf("enter the value of b:");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("the value of a is %d\n", a);
printf("the value of b is %d\n", b);
return 0;
}

