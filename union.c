#include <stdio.h>
#include <string.h>

union Data {  
    int i;
    float f;
    char str[20];
};


struct Datastruct {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data u;
    struct Datastruct s;

    u.i = 10;
    printf("Union int : %d\n", u.i);

    u.f = 5.5;
    printf("Union float : %.1f\n", u.f);

    strcpy(u.str, "Hello");
    printf("Union string : %s\n", u.str);

    printf("\nSize of union : %lu bytes\n", sizeof(u));
    printf("Size of struct : %lu bytes\n", sizeof(s));

    return 0;
}
