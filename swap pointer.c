#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char *str1, *str2;

    str1 = (char*)malloc(20);
    str2 = (char*)malloc(20);

    strcpy(str1, "Apple");
    strcpy(str2, "Mango");

    printf("Before swap:str1 = %s str2 = %s\n", str1, str2);

    swap(&str1, &str2);
    printf("After swapnstr1 = %s str2 = %s", str1, str2);

    free(str1);
    free(str2);

    return 0;
}
