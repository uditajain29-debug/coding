#include <stdio.h>
int main()
{
    printf("enter the month number 1-12");
    int num;
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("january\n");
        printf("31 days");
        break;
    case 2:
        printf("february\n");
        printf("28 days or 29 days in leap year");
        break;
    case 3:
        printf("march\n");
        printf("31 days");
        break;
    case 4:
        printf("april\n");
        printf("30 days");
        break;
    case 5:
        printf("may\n");
        printf("31 days");
        break;
    case 6:
        printf("june\n");
        printf("30 days");
        break;
    case 7:
        printf("july\n");
        printf("31 days");
        break;
    case 8:
        printf("august\n");
        printf("31 days");
        break;
    case 9:
        printf("september\n");
        printf("30 days");
        break;
    case 10:
        printf("october\n");
        printf("31 days");
        break;
    case 11:
        printf("november\n");
        printf("30 days");
        break;
    case 12:
        printf("december\n");
        printf("31 days");
        break;
        default:
        printf("invalid input");
}
return 0;
}