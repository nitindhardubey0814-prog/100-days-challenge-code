//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main() {
    int marks;
    printf("Enter percentage: ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
        printf("Grade A\n");
    else if (marks >= 80 && marks <= 89)
        printf("Grade B\n");
    else if (marks >= 70 && marks <= 79)
        printf("Grade C\n");
    else if (marks >= 60 && marks <= 69)
        printf("Grade D\n");
    else if (marks < 60 && marks >= 0)
        printf("Grade F\n");
    else
        printf("Invalid percentage\n");
    return 0;
}
