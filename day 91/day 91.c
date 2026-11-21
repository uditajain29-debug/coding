//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/
#include<stdio.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
struct student s;
printf("enter the name of student");
scanf("%s",s.name);
printf("enter the roll number of student");
scanf("%d",&s.roll_no);
printf("enter the marks of student");
scanf("%f",&s.marks);
printf("name : %s| roll : %d | marks: %f",s.name,s.roll_no,s.marks);
}
