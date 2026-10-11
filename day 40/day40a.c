//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main(){
    int n,a[5][5],i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Diagonal traversal of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",a[j][i-j]);
        }
    }
    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            printf("%d ",a[j][n-1-(j-i)]);
        }
    }
    return 0;
}