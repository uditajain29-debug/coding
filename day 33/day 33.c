//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, s;
    printf("ENTER SIZE");
    scanf("%d", &n);
    printf("ENTER ELEMENTS");
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("ENTER EMENENT TO BE SEARCHED");
    scanf("%d", &s);
    
    int low = 0, high = n - 1;
    int found_index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == s) {
            found_index = mid;
            break;
        } else if (arr[mid] < s) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
