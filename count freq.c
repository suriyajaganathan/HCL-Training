#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char words[50][20];
    int count[50] = {0};   
    int n = 0;

    printf("Enter a paragraph:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *token = strtok(str, " ");

    while(token != NULL) {
        int found = 0;

        for(int i = 0; i < n; i++) {
            if(strcmp(words[i], token) == 0) {
                count[i]++;   
                found = 1;
                break;
            }
        }

        if(found == 0) {
            strcpy(words[n], token);
            count[n] = 1;
            n++;
        }

        token = strtok(NULL, " ");
    }

    printf("\nWord Frequencies:\n");
    for(int i = 0; i < n; i++) {
        printf("%s : %d\n", words[i], count[i]);
    }

    return 0;
}
