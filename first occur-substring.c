#include <stdio.h>

int fun(const char str[], const char sub[]) {
    int i = 0, j=0;

    while (str[i] != '\0') {
        while (sub[j] != '\0' && str[i + j] == sub[j]) {
            j++;
        }
        if (sub[j] == '\0') {
            return i; 
        }
        i++;
    }

    return -1; 
}

int main() {
    char str[] = "hi alex";
    char sub[] = "alex";

    int index = fun(str, sub);

    if (index != -1)
        printf("Substring at  %d\n", index);
    else
        printf("not found\n");

    return 0;
}

