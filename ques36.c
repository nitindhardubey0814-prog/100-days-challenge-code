//Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int a, b, temp, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}
