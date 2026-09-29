//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main() {
    int n,m;
    printf("enter the number of row of matrix:");
    scanf("%d",&n);
    printf("enter the number of coulumn of matrix:");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter elements:");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("matrix:\n");
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}