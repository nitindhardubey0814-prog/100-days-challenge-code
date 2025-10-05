//Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int n, temp, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }
    for(digit = 0; digit < 10; digit++) {
        if(count[digit] > maxCount) {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }
    printf("Digit %d occurs the most times (%d times)\n", maxDigit, maxCount);
    return 0;
}
