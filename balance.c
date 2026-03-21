#include <stdio.h>

int main() {
    char exp[100], stack[100];
    int top = -1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++) {

        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            stack[++top] = exp[i];   

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {

            if (top == -1) {
                printf("Not Balanced\n");
                return 0;
            }

            char open = stack[top--]; 

            if ((open == '(' && exp[i] != ')') ||
                (open == '{' && exp[i] != '}') ||
                (open == '[' && exp[i] != ']')) {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
