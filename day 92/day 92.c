//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include<stdio.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
struct student s[5];
for (int i = 0; i < 5; i++)
{
printf("enter the name of student");
scanf("%s",s[i].name);
printf("enter the roll number of student");
scanf("%d",&s[i].roll_no);
printf("enter the marks of student ");
scanf("%f",&s[i].marks);
}
for (int i = 0; i < 5; i++){
printf("name : %s| roll : %d | marks: %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
}
}
