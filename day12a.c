#include <stdio.h>
int main()
{
    printf("enter the number of due days");
    int day;
    scanf("%d",&day);
    if(day<=0)
    {
        printf("invalid input");
    }
    else if(day<=5)
    {
    int fine= day*2;
    printf("fine is %d", fine);
    }
    else if(day>5 && day<=10)
    {
        int fine = (day-5)*4 + 10;
        printf("fine is %d", fine);
    }
    else if(day>10 && day<=30)
    {
        int fine = (day-10)*6 + 30;
        printf("fine is %d", fine);
    }
    else if(day>30)
    {
        printf("membership cancelled");
    }
}