//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int a[10], n, i, j;
    int count, max = 0, most;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter number:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > max)
        {
            max = count;
            most = a[i];
        }
    }

    printf("Most frequent number = %d", most);
    printf("\nFrequency = %d", max);

    return 0;
}