//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main(){
    int rows,cols,a[5][5],b[5][5],c[5][5],i,j;
    printf("Enter rows and columns: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter first matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter second matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("Result:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}