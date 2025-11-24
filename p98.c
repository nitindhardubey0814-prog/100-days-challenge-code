//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 
    int len = strlen(name);
    for(int i = 0; i < len; i++) {
        if(i == 0 && name[i] != ' ') {
            if(name[i] >= 'a' && name[i] <= 'z')
                name[i] = name[i] - 32;
            printf("%c. ", name[i]);
        }
        if(name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            int isLast = 1;
            for(int j = i+1; j < len; j++) {
                if(name[j] == ' ') {
                    isLast = 0;
                    break;
                }
            }
            if(!isLast) {
                char ch = name[i+1];
                if(ch >= 'a' && ch <= 'z')
                    ch = ch - 32;
                printf("%c. ", ch);
            } else {
                for(int k = i+1; k < len; k++)
                    printf("%c", name[k]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
