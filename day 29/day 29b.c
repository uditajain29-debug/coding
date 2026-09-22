// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main()
{ printf("enter the SIZE");
    int n ;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int min=arr[0];
   int max=arr[0];
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
        if(min>arr[j])
        {
min= arr[j];
        }
        if(max<arr[j])
        {
max= arr[j];
        }
    }
} printf("max=%d\n",max);
printf("min=%d\n",min);
}