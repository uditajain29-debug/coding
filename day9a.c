#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,discriminant;
    printf("Enter the coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    if(discriminant > 0)
    {
        printf("Roots are real and different.\n");
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if(discriminant == 0)
    {
        printf("Roots are real and equal.\n");
        float root = -b / (2*a);
        printf("Root = %.2f\n", root);
    }
    else
    {
        printf("Roots are complex and different.\n");
    }
    return 0;
}