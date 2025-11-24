//Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[200], result[200];
    int i = 0, j = 0;
    printf("Enter a string: ");
    gets(str);  // (Use fgets for safety in modern compilers)
    while (str[i] != '\0') {
        // Check if current character is NOT a vowel
        if (!(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
              str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
            result[j] = str[i];  // Copy only non-vowel characters
            j++;
        }
        i++;
    }
    result[j] = '\0';  // End the new string
    printf("String after removing vowels: %s\n", result);
    return 0;
}
