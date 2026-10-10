//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main(){
    int n,a[5][5],flag=0,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i][i]==a[j][j]){
                flag=1;
                break;
            }
    if(flag==1)
        printf("Diagonal elements are not distinct\n");
    else
        printf("Diagonal elements are distinct\n");
    return 0;
        }
        