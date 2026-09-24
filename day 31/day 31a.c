//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{ printf("enter the SIZE");
    int n,s;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(s==arr[i])
        {
         printf("found at index %d",i);
        }
    }
}