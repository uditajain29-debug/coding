//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
void structureprint(struct student s)
{
printf("enter the name of student");
scanf("%s",s.name);
printf("enter the roll number of student");
scanf("%d",&s.roll_no);
printf("enter the marks of student");
scanf("%f",&s.marks);
printf("name : %s| roll : %d | marks: %f",s.name,s.roll_no,s.marks);
}
int main()
{
    struct student s;
    structureprint(s);
}
