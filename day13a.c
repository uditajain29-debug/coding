#include <stdio.h>
int main(){
    float a,b;
    printf("enter the numbers");
    scanf("%f%f",&a,&b);
    printf("enter the operator");
    char op;
    scanf(" %c",&op);
    switch(op)
    {
    case '+':
        printf("%f",a+b);
        break;
    case '-':
        printf("%f",a-b);
        break;
    case '*':
        printf("%f",a*b);
        break;
    case '/':
        if(b!=0)
        {
            printf("%f",a/b);
        }
        else
        {
            printf("invalid input");
        }
        break;
        default:
        printf("invalid input");
    }
}