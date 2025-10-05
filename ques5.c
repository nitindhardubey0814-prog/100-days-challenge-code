//Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit = %.2f\n", (c * 9 / 5) + 32);
    return 0;
}
