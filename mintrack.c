#include <stdio.h>
#define MAX 5

int arr[MAX], ministack[MAX];
int top = -1, mini = -1;

void push(int x) {
    if(top == MAX - 1) {
        printf("Overflow\n");
    }
    arr[++top] = x;
    if(mini == -1 || x <= ministack[mini]) {
        ministack[++mini] = x;
    }
}

int pop() {
    if(top == -1) {
        printf("Underflow\n");
        return -1;
    }
    int val = arr[top--];
    if(val == ministack[mini]) {
        mini--;
    }
    return val;
}

int mintrack() {
    if(mini == -1) {
        printf("Stack empty\n");
        return -1;
    }
    return ministack[mini];
}

int main() {

    push(1);
    push(3);
    push(5);
    push(8);
    push(2);

    printf("Min: %d\n", mintrack());

    printf("Popped: %d\n", pop()); 
    printf("Min: %d\n", mintrack()); 

    printf("Popped: %d\n", pop()); 
    printf("Stack elements\n");
    for(int i=0;i<=top;i++){
        printf("%d\n",arr[i]);
    }


    return 0;
}