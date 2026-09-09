#include <stdio.h>
int main()
{
    int p, r, t, si ,ci;
    printf("enter the value of p:");
    scanf("%d", &p);
    printf("enter the value of r:");
    scanf("%d", &r);
    printf("enter the value of t:");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("the simple interest is %d\n", si);
    ci = p * (1 + r/100) * t - p;
    printf("the compound interest is %d\n", ci);
    return 0;
}