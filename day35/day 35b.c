//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;

    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position:");
    scanf("%d",&k);
    int temp[n];
    for (int i = 0; i < n; i++) {
        int new = (i + k) % n;
        temp[new] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
