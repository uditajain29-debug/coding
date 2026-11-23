//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include<stdio.h>
struct student {
    char name[50];
    int roll_no;
    float marks;
};
void top(struct student s[10],int n){
float topper=0;
int j;
for(int i=0;i<n;i++)
{
    if(s[i].marks>topper)
{
   topper = s[i].marks;
   j=i;
}
}
printf("topper : %s(marks :%.2f)",s[j].name,topper);
}
int main()
{ int n;
    printf("enter number of student");
    scanf("%d",&n);
struct student s[n];
for (int i = 0; i < n; i++)
{
printf("enter the name of student");
scanf("%s",s[i].name);
printf("enter the roll number of student");
scanf("%d",&s[i].roll_no);
printf("enter the marks of student ");
scanf("%f",&s[i].marks);
}
top(s,n);
}
