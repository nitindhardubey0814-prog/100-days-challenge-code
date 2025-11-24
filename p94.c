//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    char longest[50], word[50];
    int i, j = 0, maxLen = 0, len;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 
    sentence[strcspn(sentence, "\n")] = '\0'; 
    longest[0] = '\0'; 
    for(i = 0; ; i++) {
        if(sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i]; 
        } else {
            word[j] = '\0'; 
            len = strlen(word);
            if(len > maxLen) {
                maxLen = len;
                strcpy(longest, word); 
            }
            j = 0; 
        }
        if(sentence[i] == '\0') break;
    }
    printf("The longest word is: %s\n", longest);
    return 0;
}
