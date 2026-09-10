#include <stdio.h>
int main()
{
    printf("enter the unit consumed:\n");
    int unit;
    scanf("%d",&unit);
    if(unit<=0)
    {
        printf("invalid input");
    }
    else if(unit<=100)
    {
        int bill = unit*5;
        printf("bill is %d", bill);
    }
    else if(unit>100 && unit<=200)
    {
        int bill = (unit-100)*7 + 500;
        printf("bill is %d", bill);
    }
    else if(unit>200 && unit<=300)
    {
        int bill = (unit-200)*10 + 1200;
        printf("bill is %d", bill);
    }
    else if(unit>300)
    {
        int bill = (unit-300)*12+ 2200;
        printf("bill is %d", bill);
    }
}