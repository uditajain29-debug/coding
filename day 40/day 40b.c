//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf(" enter the sixe of 1st arrray (r,c)");
    scanf("%d %d",&a,&b);
    printf(" enter the sixe of 2nd arrray (r,c)");
    scanf("%d %d",&c,&d);
    int m[a][b];
    int n[c][d];
    int mn[a][d];
    printf("enter 1st matrix");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
    {
        scanf("%d",&m[i][j]);
    }
}
    printf("enter 2nd matrix");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
    {
        scanf("%d",&n[i][j]);
    }
}
for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        { mn[i][j]=0;
        }
    }
    if(b==c)
    {
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
             for(int k=0;k<b;k++)
             {
         mn[i][j]+=m[i][k]*n[k][j];
             }
        }
    }
}
for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d ",mn[i][j]);
        }
        printf("\n");
    }
    }