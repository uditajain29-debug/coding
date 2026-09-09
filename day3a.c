#include <stdio.h>
int main()
{
    printf("enter  the temperature in celsius\n");
    float celsius;
    scanf("%f",&celsius);
    float fahrenheit = (celsius * 9/5) + 32;
    printf("the temperature in fahrenheit is %f\n", fahrenheit);
    return 0;
}