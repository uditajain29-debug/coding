#include <stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    printf("The area of the circle is: %f\n", area);
    printf("The circumference of the circle is: %f\n", circumference);
    return 0;
}
 