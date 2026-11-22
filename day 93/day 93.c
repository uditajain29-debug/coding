//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
int main()
{ int n,j;
    printf("enter number of student");
    scanf("%d",&n);
     float topper=0;
struct student s[n];
for (int i = 0; i < n; i++)
{
printf("enter the name of student");
scanf("%s",s[i].name);
printf("enter the roll number of student");
scanf("%d",&s[i].roll_no);
printf("enter the marks of student ");
scanf("%f",&s[i].marks);
if(s[i].marks>topper)
{
   topper= s[i].marks;
   j=i;
}
}
printf("topper : %s(marks :%.2f)",s[j].name,topper);
}
