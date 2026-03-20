#include <stdio.h>

void copy(const char *dest, const char *src, size_t n) {
    if (n == 0) return;

    size_t i;
    for (i = 0; i < n - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char src[100] = "embedded programming";
    char dest[10];  
    copy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
