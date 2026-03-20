#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, j = 0;

    printf("Enter: ");
    scanf("%[^\n]", str);

    printf("Enter char: ");
    scanf(" %c", &ch);  

    
    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; 

    printf("String: %s\n", str);

    return 0;
}
