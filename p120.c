//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int capitalizeNext = 1; // Capitalize first letter of sentence
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } 
        else 
            str[i] = tolower(str[i]);
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') 
            capitalizeNext = 1; 
    }
    printf("Sentence case: %s\n", str);
    return 0;
}
