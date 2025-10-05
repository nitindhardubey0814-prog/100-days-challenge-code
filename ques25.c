//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main() {
    char op;
    double a, b;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch(op) {
        case '+': printf("Result = %.2lf\n", a + b); break;
        case '-': printf("Result = %.2lf\n", a - b); break;
        case '*': printf("Result = %.2lf\n", a * b); break;
        case '/': 
            if(b != 0)
                printf("Result = %.2lf\n", a / b); 
            else
                printf("Cannot divide by zero\n");
            break;
        case '%': 
            if((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b); 
            else
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
