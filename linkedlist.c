#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

void insertbegin(int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
 
    newnode->next = head;
    head = newnode;
}

void insertend(int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
    } else {
        struct node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
     }
     temp->next = newnode;
    }
}
void display() {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertend(1);
    insertend(2);
    insertend(3);
    insertend(4);

    insertbegin(0);         
    display();

    return 0;
}