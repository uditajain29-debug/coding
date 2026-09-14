//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digits, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = (num < 0) ? -num : num;

    lastDigit = temp % 10;
    digits = (int)log10(temp);
    firstDigit = temp / (int)pow(10, digits);
    power = (int)pow(10, digits);

    swappedNum = lastDigit * power + ((temp % power) / 10) * 10 + firstDigit;

    if (num < 0) {
        swappedNum = -swappedNum;
    }

    printf("Output: %d\n", swappedNum);

    return 0;
}
