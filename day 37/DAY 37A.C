//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int b[r];

    for (int i = 0; i < r; i++) {
        b[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            b[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
