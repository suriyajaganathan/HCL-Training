#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char *cities[20];  
    char temp[50];
    char *swap;

    printf("Enter number of cities: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        printf("Enter city %d: ", i+1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        cities[i] = (char*)malloc(strlen(temp)+1);
        strcpy(cities[i], temp);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(cities[i], cities[j]) > 0) {
                swap = cities[i];
                cities[i] = cities[j];
                cities[j] = swap;
            }
        }
    }

    printf("\nSorted Cities:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }

    for(int i = 0; i < n; i++) {
        free(cities[i]);
    }

    return 0;
}
