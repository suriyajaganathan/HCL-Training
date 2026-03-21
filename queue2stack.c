#include <stdio.h>
#define N 100

int s1[N], s2[N];
int top1 = -1, top2 = -1;

void push(int stack[], int *top, int x) {
    stack[++(*top)] = x;
}

int pop(int stack[], int *top) {
    return stack[(*top)--];
}

void enqueue(int x) {
    push(s1, &top1, x);
    printf("Enqueued: %d\n", x);
}

void dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push(s2, &top2, pop(s1, &top1));
        }
    }

    printf("Dequeued: %d\n", pop(s2, &top2));
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    enqueue(40);
    dequeue();

    return 0;
}