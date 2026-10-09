//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main(){
    int rows,cols,a[5][5],t[5][5],i,j;
    printf("Enter rows and columns: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            t[j][i]=a[i][j];
    }
    
    int symmetric = 0; 
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(a[i][j]==t[i][j]){
                symmetric = 1;
                break;
            }
        }
        if(symmetric == 0)
            break;
    }
    if(symmetric == 1)
        printf("symmetric matrix\n");
    else
        printf("not symmetric matrix\n");
    return 0;
}