//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    int i, start, end;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; 
    int len = strlen(sentence);
    start = 0;
    for(i = 0; i <= len; i++) {
        if(sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;
            while(start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("Sentence after reversing each word: %s\n", sentence);
    return 0;
}
