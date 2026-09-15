#include <stdio.h>

int main() {
    int n;
    double sum = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
