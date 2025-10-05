//Write a program to take a number as input and print its equivalent binary representation

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() {
    int n, i;
    int binary[32];
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 0; i < 32; i++) {
        binary[i] = n % 2;
        n /= 2;
    }
    printf("Binary representation: ");
    for(i = 31; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}
