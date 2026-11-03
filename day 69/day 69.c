//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int nums[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int r=-1;
    for (int i = 0; i < n; i++) {
        if (nums[abs(nums[i])] >= 0) {
            nums[abs(nums[i])] = -nums[abs(nums[i])];
        } else {
            r=abs(nums[i]);
            break;
        }
    }
    printf("repeated element is: %d\n", r);
    return 0;
}
