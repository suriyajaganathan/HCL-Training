#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int i = 0, j, len = 0;

    printf("Enter: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        while (!isalnum(str[i]) && i < j)
            i++;

        while (!isalnum(str[j]) && i < j)
            j--;

        if (tolower(str[i]) != tolower(str[j])) {
            printf("Not Palindrome\n");
        }

        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
