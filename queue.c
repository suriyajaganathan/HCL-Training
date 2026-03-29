#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX - 1) {
        printf("Queue Full\n");
        return;
    }

    if(front == -1) front = 0;

    queue[++rear] = x;
}

int dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Empty\n");
        return -1;
    }

    return queue[front++];
}

void display() {
    if(front == -1 || front > rear) {
        printf("Empty\n");
        return;
    }

    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();  

    printf("Removed: %d\n", dequeue());

    display();   

    return 0;
}