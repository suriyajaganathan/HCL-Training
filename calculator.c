#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { 
    if (b != 0) return a / b;
    else {
        printf("Error\n");
        return 0;
    }
}

int main() {
    int x, y, choice, result;

    int (*calc[])(int, int) = {add, subtract, multiply, divide};

    printf("Enter ");
    scanf("%d %d", &x, &y);

    printf("Select :\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    if(choice < 1 || choice > 4) {
        printf("Invalid\n");
        return 0;
    }

    result = calc[choice - 1](x, y);
    printf("Result = %d\n", result);

    return 0;	
}
