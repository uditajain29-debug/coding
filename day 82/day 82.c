//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
#include<string.h>
enum colour
{
    RED,
    YELLOW,
    GREEN
};
int main()
{
    printf("Enter the traffic light colour ");
    char c[10];
    scanf("%s", c);
    int light;
    if (strcmp(c, "RED") == 0)
        light = RED;
    else if (strcmp(c, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(c, "GREEN") == 0)
        light = GREEN;
        else
        {
            printf("Invalid input\n");
            return 0;
        }
    switch (light)
    {
        case 0:
            printf("Stop\n");
            break;
        case 1:
            printf("Wait\n");
            break;
        case 2:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
            break;
}
}
