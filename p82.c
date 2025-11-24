//Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str); 
    while (str[count] != '\0') {  
        printf("%c\n",str[count]);
        count++;
    }
    printf("Number of characters in the string: %d\n", count);
    return 0;
}
