//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0}; 
    int i;
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq1[ch - 'A']++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq2[ch - 'A']++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}
