//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main(){
    int n,a[5][5],diagonal_sum=0,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
        diagonal_sum=diagonal_sum+a[i][i];
    printf("Sum of diagonal elements = %d",diagonal_sum);
    return 0;
}