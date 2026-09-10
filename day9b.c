#include <stdio.h>
int main()
{
    printf("enter your percentage:");
    int marks;
    scanf("%d", &marks);
    if(marks >= 90 && marks <= 100)
    {
        printf("A");
    }
    if(marks >= 80 && marks < 90)
    {
        printf("B");
    }
    if(marks >= 70 && marks < 80)
    {
        printf("C");
    }
    if(marks >= 60 && marks < 70)
    {
        printf("D");
    }
    if(marks<60)
    {
        printf("F");
    }
    return 0;
}