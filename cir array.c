#include <stdio.h>
#define N 5

int q[N], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % N == front) {
        printf("Full\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % N;
    q[rear] = x;
}


void dequeue() {
    if (front == -1) {
        printf("Empty\n");
        return;
    }
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % N;
}


void display() {
    if (front == -1) return;
    int i = front;
    while (1) {
        printf("%d ", q[i]);
        if (i == rear) break;
        i = (i + 1) % N;
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();

    dequeue();
    enqueue(5);
    enqueue(6);   
    display();

    return 0;
}
