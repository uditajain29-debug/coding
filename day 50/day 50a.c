//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    int day, month, year;
    char monthStr[4];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);
    switch(month)
    {
        case 1:
            strcpy(monthStr, "Jan");
            break;
        case 2:
            strcpy(monthStr, "Feb");
            break;
        case 3:
            strcpy(monthStr, "Mar");
            break;
        case 4:
            strcpy(monthStr, "Apr");
            break;
        case 5:
            strcpy(monthStr, "May");
            break;
        case 6:
            strcpy(monthStr, "Jun");
            break;
        case 7:
            strcpy(monthStr, "Jul");
            break;
        case 8:
            strcpy(monthStr, "Aug");
            break;
        case 9:
            strcpy(monthStr, "Sep");
            break;
        case 10:
            strcpy(monthStr, "Oct");
            break;
        case 11:
            strcpy(monthStr, "Nov");
            break;
        case 12:
            strcpy(monthStr, "Dec");
            break;
        default:
            printf("Invalid month\n");
            return 1;
}
printf("Date in dd-MMM-yyyy format: %02d-%s-%d\n", day, monthStr, year);
return 0;
}