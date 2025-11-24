//Check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, len = 0;
    char temp,check;
    printf("Enter a string: ");
    gets(str);  
    while (str[len] != '\0') 
        len++;
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    if (check==str)
        printf("PALINDROME");
    else
        printf("NOT A PALINDROME");
    return 0;
}
