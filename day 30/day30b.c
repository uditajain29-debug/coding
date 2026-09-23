//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{ printf("enter the SIZE");
    int n,p=0,ne=0,z=0;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 )
        {
            p++;
        }
        else if(arr[i]<0){
            ne++;
        }
        else{
            z++;
        }
    }
   
        printf("negative=%d\npositive=%d\nzero=%d",ne,p,z);

}