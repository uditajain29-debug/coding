//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n, m;
    
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n);
    printf("Enter the size of the 2nd array: ");
    scanf("%d", &m);

    int arr[n];
    int ar[m];
    int arr2[n + m];

    printf("Enter the elements of the 1st array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements of the 2nd array:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }
    for(int i = 0; i < m; i++) {
        arr2[n + i] = ar[i]; 
    }

    printf("The merged array is:\n");
    for(int i = 0; i < (n + m); i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
