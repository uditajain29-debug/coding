//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include<stdio.h>
enum print {
    a=10,
    b,
    c,
    d,
    e
};
int main() {
   for(int i=a; i<=e; i++) {
        printf("%c=%d\n", 'A'+(i-a), i);
    }
    return 0;
}
   
