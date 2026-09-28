//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{ printf("enter the size of array:");
    int n;
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)//sorting 
    { int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
               k=j;
            }
        }
        int temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\n");
    printf("the second largest element in array is %d",arr[n-2]);
}