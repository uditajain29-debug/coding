//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>
struct jd{
    int day;
    int month;
    int year;
};
struct employee
{
    char name [30];
    int id;
    struct jd j;
};
int main()
{
    struct employee e;
    printf("enter name ,id ,date of joining (dd,mm,yyyy)");
    scanf(" %s %d %d %d %d",  e.name, &e.id, &e.j.day, &e.j.month,&e.j.year);
     printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.j.day, e.j.month,e.j.year);
return 0;
}
