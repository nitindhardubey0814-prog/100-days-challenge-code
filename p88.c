//Replace spaces with hyphens in a string.
#include <stdio.h>
int main() {
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);  
    while (str[i] != '\0') {
        if (str[i] == ' ') 
            str[i]='-';
        i++;
    }
    printf("New String: %s\n", str);
    return 0;
}