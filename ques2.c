//Write a program to input two numbers and display their sum, diffrence, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main() {
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    printf("Sum = %.2lf\n", x + y);
    printf("Difference = %.2lf\n", x - y);
    printf("Product = %.2lf\n", x * y);
    if (y != 0)
        printf("Quotient = %.2lf\n", x / y);
    else
        printf("Quotient = undefined\n");
    return 0;
}

