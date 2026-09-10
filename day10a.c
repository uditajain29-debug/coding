#include <stdio.h>
    int main()
    {
printf("enter the sides od the triangle:");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("the triangle is valid\n");
        if(a==b && b==c)
        {
            printf("the triangle is equilateral");
        }
        else if(a==b || b==c || a==c)
        {
            printf("the triangle is isosceles");
        }
        else
        {
            printf("the triangle is scalene");
        }
    }
    return 0;
}