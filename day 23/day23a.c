//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    int count =1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        sum += (double)(2 * i ) / ((2 * i)+count);
        count=count+2;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
