#include <stdio.h>
int main() {
    printf("enter the number");
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}